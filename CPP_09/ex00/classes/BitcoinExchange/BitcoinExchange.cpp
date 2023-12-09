/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:47:54 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/12/04 22:07:41 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void openFile(std::ifstream& fd, const char* filePath) {
	fd.open(filePath);

	if (fd.fail())
		throw std::runtime_error((std::string("Could not open file: ") + std::string(filePath)).c_str());
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	dataFile;
	openFile(dataFile, "data.csv");

	std::string		buffer;
	while(std::getline(dataFile, buffer))
	{
		std::stringstream	inputString(buffer);
		std::string			date;
		std::string			rateStr;
		
		std::getline(inputString, date, ',');
		std::getline(inputString, rateStr);

		this->_data[date] = atof(rateStr.c_str());
	}

	dataFile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) { *this = src; }
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &obj)
{
	if (this == &obj)
		return (*this);

	*this = obj;
	return (*this);
}

static std::string createDateString(int year, int month, int day)
{
	std::stringstream ss;

	ss << year << "-";
	
	if (month < 10)
		ss << "0" << month;
	else
		ss << month;

	ss << "-";
	
	if (day < 10)
		ss << "0" << day;
	else
		ss << day;
		
	return (ss.str());
}


std::string BitcoinExchange::findClosestDate(char *date)
{
	int	year;
	int month;
	int day;

	sscanf(date, "%d-%d-%d", &year, &month, &day);
	std::string closest(createDateString(year, month, day));
	while (true)
	{
		for (int i = month; i > 0; i--, month--)
		{
			for(int j = day; j > 0; j--, day--)
			{
				closest = createDateString(year, month, day);
				if (this->_data.find(closest) != this->_data.end())
					return (closest); 
			}
			day = 31;
		}
		month = 12;
		year--;
	}

	return (closest);
}

void BitcoinExchange::printTransaction(std::string line)
{
	float		transactions;
	char		date[20];
	std::string	finalDate;

	if (sscanf(line.c_str(), "%s | %f", date, &transactions) == 2)
	{
		if (transactions < 0)
			throw std::runtime_error("Not a positive number.");
		else if (transactions > 1000)
			throw std::runtime_error("Too large a number.");
		else
		{
			iterator it = this->_data.find(date);

			if (it == this->_data.end()) 
				finalDate = findClosestDate(date);
			else
				finalDate = date;
			std::cout << finalDate << " => " << transactions << " = " << transactions * this->_data[finalDate] << std::endl;
		}
	}
}

void BitcoinExchange::readInput()
{
	std::ifstream	inputFile;
	openFile(inputFile, this->inputPath.c_str());

	std::string	buffer;
	while(std::getline(inputFile, buffer))
	{
		try
		{
			printTransaction(buffer);
		}
		catch (std::exception &e)
		{	
			std::cout << "Error: " << e.what() << " => " << buffer << std::endl;
		}
	}

	inputFile.close();
}
