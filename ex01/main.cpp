/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:54:45 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/28 14:56:09 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

void menu(void) {
	std::cout	<< "-------------------------"	<< std::endl
				<< "|       PhoneBook       |"	<< std::endl
				<< "-------------------------"	<< std::endl
				<< "[ADD] Add a new contact"	<< std::endl
				<< "[SEARCH] Search a contact"	<< std::endl
				<< "[EXIT] Exit the PhoneBook"	<< std::endl
				<< "-------------------------"	<< std::endl
				<< "Option: ";
}

int main(void) {
	std::string opt;
	PhoneBook	phoneBook;

	do
	{
		menu();

		std::cin >> opt;
		
		if (opt == "ADD" || opt == "add") {
			
		}
		else if (opt == "SEARCH" || opt == "search") {
			
		}
		else if (opt != "EXIT" && opt != "exit")
			std::cout << "Error! Invalid Option" << std::endl;

	} while (opt != "EXIT" && opt != "exit");

	std::cout << "Exiting..." << std::endl;
	return (0);
}
