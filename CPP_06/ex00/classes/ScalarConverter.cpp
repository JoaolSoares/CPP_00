/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:47:54 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 21:09:55 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char	ScalarConverter::_charValue		= 'a';
int		ScalarConverter::_intValue		= 0;
float	ScalarConverter::_floatValue	= 0.0f;
double	ScalarConverter::_doubleValue	= 0.0;


ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &src) { *this = src; }
ScalarConverter::~ScalarConverter() {}
ScalarConverter &ScalarConverter::operator = (const ScalarConverter &obj) {
	if (this == &obj)
		return (*this);

	*this = obj;
	return (*this);
}

static bool isChar(std::string toConvert) {
	if (toConvert.length() == 1) 
		if (toConvert[0] >= 32 && toConvert[0] <= 126)
			if (!(toConvert[0] >= '0' && toConvert[0] <= '9'))
				return (true);

	return (false);
}

static bool isInt(std::string toConvert) {	
	for (size_t i = 0; i < toConvert.length(); i++) {
		if (i == 0 && toConvert[0] == '-')
			continue ;
		if (!(toConvert[i] >= '0' && toConvert[i] <= '9'))
			return (false);
	}
	return (true);
}

static bool isFloat(std::string toConvert) {

	if (toConvert.find('f') != (toConvert.length() - 1)
	 || toConvert.find('f') != toConvert.rfind('f'))
		return (false);
		
	if (toConvert.find('.') != toConvert.rfind('.')
	 || toConvert.find('.') == std::string::npos)
		return (false);

	for (size_t i = 0; i < toConvert.length() - 1; i++) {
		if (i == 0 && toConvert[0] == '-')
			continue ;
		if (!(toConvert[i] >= '0' && toConvert[i] <= '9')) 
			if (toConvert[i] != '.')
				return (false);
	}

	return (true);
}

static bool isDouble(std::string toConvert) {
		
	if (toConvert.find('.') != toConvert.rfind('.')
	 || toConvert.find('.') == std::string::npos)
		return (false);

	for (size_t i = 0; i < toConvert.length() - 1; i++) {
		if (i == 0 && toConvert[0] == '-')
			continue ;
		if (!(toConvert[i] >= '0' && toConvert[i] <= '9')) 
			if (toConvert[i] != '.')
				return (false);
	}

	return (true);
}

static bool isPseudo(std::string toConvert) {
	std::string map[6] = {"+inf", "+inff", "-inf", "-inff", "nan", "nanf"};

	for (int i = 0; i < 6; i++)
		if (map[i].compare(toConvert) == 0) 
			return (true);
		
	return (false);
}

static int findType(std::string toConvert) {
	if (isChar(toConvert))
		return (1);
	else if (isInt(toConvert))
		return (2);
	else if (isFloat(toConvert))
		return (3);
	else if (isDouble(toConvert))
		return (4);
	else if (isPseudo(toConvert))
		return (5);

	return (0);
} 

void ScalarConverter::convertNums(char c) {
	_charValue		= c;
	_intValue		= static_cast<int>(c);
	_floatValue		= static_cast<float>(c);
	_doubleValue	= static_cast<double>(c);
}
void ScalarConverter::convertNums(int n) {
	_intValue		= n;
	_charValue		= static_cast<char>(n);
	_floatValue		= static_cast<float>(n);
	_doubleValue	= static_cast<double>(n);
}
void ScalarConverter::convertNums(float n) {
	_floatValue		= n;
	_doubleValue	= static_cast<double>(n);
	_intValue		= static_cast<int>(n);
	_charValue		= static_cast<char>(n);
}
void ScalarConverter::convertNums(double n) {
	_doubleValue	= n;
	_intValue		= static_cast<int>(n);
	_charValue		= static_cast<char>(n);
	_floatValue		= static_cast<float>(n);
}

void ScalarConverter::printNums() {
	std::cout << std::fixed << std::setprecision(1);

	if (_charValue <= CHAR_MIN || _charValue >= CHAR_MAX || (_doubleValue - floor(_doubleValue) != 0))
		std::cout	<< "  char: Impossible"			<< std::endl;
	else if (!isprint(_charValue))
		std::cout	<< "  char: Not printable"			<< std::endl;
	else
		std::cout	<< "  char: " << _charValue		<< std::endl;
		
	std::cout	<< "   int: " << _intValue				<< std::endl
				<< " float: " << _floatValue << "f"		<< std::endl
				<< "double: " << _doubleValue			<< std::endl;
}

void ScalarConverter::printPseudo(std::string pseudo) {
	std::string map[6] = {"+inf", "+inff", "-inf", "-inff", "nan", "nanf"};
	
	std::cout	<< "  char: Impossible"			<< std::endl
				<< "   int: Impossible"			<< std::endl;

	if (pseudo[0] == '+') {
		std::cout	<< " float: +inff"	<< std::endl
					<< "double: +inf"	<< std::endl;
	}
	else if (pseudo[0] == '-') {
		std::cout	<< " float: -inff"	<< std::endl
					<< "double: -inf"	<< std::endl;
	}
	else {
		std::cout	<< " float: nanf"	<< std::endl
					<< "double: nan"	<< std::endl;
	}
}


void ScalarConverter::convert(std::string toConvert) {
	switch (findType(toConvert)) {
		case 1:
			convertNums(toConvert[0]);
			printNums();
			break ;
		case 2:
			convertNums(atoi(toConvert.c_str()));
			printNums();
			break ;
		case 3:
			convertNums(strtof(toConvert.c_str(), NULL));
			printNums();
			break ;
		case 4:
			convertNums(atof(toConvert.c_str()));
			printNums();
			break ;
		case 5:
			printPseudo(toConvert);
			break;
		default:
			std::cout << "Invalid Argument" << std::endl;
	}
}
