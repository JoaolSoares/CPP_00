/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:48:37 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 21:46:10 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <cmath>

class BitcoinExchange {
	private:
		std::map<std::string, float>	_data;

	public:
		typedef typename std::map<std::string, float>::iterator iterator;
		std::string	inputPath;
	
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();
		BitcoinExchange &operator = (const BitcoinExchange &obj);

		void		readInput();
		void		printTransaction(std::string line);
		std::string	findClosestDate(char *date);
};
