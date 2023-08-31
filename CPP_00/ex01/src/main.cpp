/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:54:45 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/31 19:35:21 by jlucas-s         ###   ########.fr       */
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

std::string getCin(void) {
	std::string str;

	std::getline(std::cin, str);
	return (str);
}

Contact getContact(void) {
	Contact contact;

	std::cout << "-------------------------------" << std::endl;
	std::cout << "    First name: "; contact.setFirstName(getCin());
	std::cout << "     Last name: "; contact.setLastName(getCin());
	std::cout << "      Nickname: "; contact.setNickname(getCin());
	std::cout << "  Phone number: "; contact.setPhoneNum(getCin());
	std::cout << "Darkest secret: "; contact.setDarkest(getCin());
	
	return (contact);
}

int main(void) {
	std::string	opt;
	PhoneBook	phoneBook;
	Contact		newContact;;

	do
	{
		menu();

		std::getline(std::cin, opt);
		
		if (opt == "ADD" || opt == "add" || opt == "1") {
			newContact = getContact();
			if (newContact.getCompleted()) {
				std::cout << "saved contact!" << std::endl;
				phoneBook.addContact(newContact);
			}
			else
				std::cout << "Error, incorrect data entry" << std::endl;
		}
		else if (opt == "SEARCH" || opt == "search" || opt == "2") {
			std::string i_opt;
			phoneBook.listContacts();
	
			std::cout << "index: ";
			std::getline(std::cin, i_opt);
			if ((i_opt[0] - '0') <= phoneBook.getNumContacts())
				phoneBook.getContact((i_opt[0] - '0') - 1).printContact();
			else
				std::cout << "Error, index out of range" << std::endl;
		}
		else if (opt != "EXIT" && opt != "exit" && opt != "3")
			std::cout << "Error! Invalid Option" << std::endl;

	} while (opt != "EXIT" && opt != "exit" && opt != "3");

	std::cout << "Exiting..." << std::endl;
	return (0);
}
