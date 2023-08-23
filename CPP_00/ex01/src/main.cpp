/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:54:45 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/22 22:24:32 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void menu(void) {
	std::cout	<< "-------------------------------"	<< std::endl
				<< "|          PhoneBook          |"	<< std::endl
				<< "-------------------------------"	<< std::endl
				<< "| ADD    | Add a new contact  |"	<< std::endl
				<< "| SEARCH | Search a contact   |"	<< std::endl
				<< "| EXIT   | Exit the PhoneBook |"	<< std::endl
				<< "-------------------------------"	<< std::endl
				<< "Option: ";
}

int main(void) {
	std::string opt;
	PhoneBook phoneBook;

	do
	{
		menu();

		std::cin >> opt;
		
		if (opt == "ADD" || opt == "add" || opt == "1") {
			std::cout << "add in future" << std::endl;
		}
		else if (opt == "SEARCH" || opt == "search" || opt == "2") {
			std::cout << "add in future" << std::endl;
			phoneBook.listContacts();
		}
		else if (opt != "EXIT" && opt != "exit" && opt != "3")
			std::cout << "Error! Invalid Option" << std::endl;

	} while (opt != "EXIT" && opt != "exit" && opt != "3");

	std::cout << "Exiting..." << std::endl;
	return (0);
}
