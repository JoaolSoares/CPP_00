/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/22 23:05:20 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "iter.hpp"

void toLower(char &arr)
{
	arr = std::tolower(arr);
}

void toUpper(char &arr)
{
	arr = std::toupper(arr);
}

int main()
{
	char array[] = {'A', 'B', 'C'};


	::iter(array, 3, toLower);

	std::cout	<<	"a[0]: " << array[0] << std::endl
				<<	"a[1]: " << array[1] << std::endl
				<<	"a[2]: " << array[2] << std::endl;

	std::cout << std::endl;

	::iter(array, 2, toUpper);

	std::cout	<<	"a[0]: " << array[0] << std::endl
				<<	"a[1]: " << array[1] << std::endl
				<<	"a[2]: " << array[2] << std::endl;
}
