/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:48:37 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 20:59:26 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <climits>
#include <cmath>

class ScalarConverter {
	private:
		static char		_charValue;
		static int		_intValue;
		static float	_floatValue;
		static double	_doubleValue;

		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter();
		ScalarConverter &operator = (const ScalarConverter &obj);

		static void printNums();
		static void printPseudo(std::string pseudo);
		static void convertNums(char c);
		static void convertNums(int n);
		static void convertNums(float n);
		static void convertNums(double n);

	public:
		static void convert(std::string toConvert);
};

