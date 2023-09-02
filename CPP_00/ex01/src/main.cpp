/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:54:45 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/01 23:23:44 by jlucas-s         ###   ########.fr       */
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

std::string getStrCin(void) {
	std::string str;

	std::getline(std::cin, str);
	return (str);
}

Contact getContact(void) {
	Contact contact;

	std::cout << "-------------------------------" << std::endl;
	std::cout << "    First name: "; contact.setFirstName(getStrCin());
	std::cout << "     Last name: "; contact.setLastName(getStrCin());
	std::cout << "      Nickname: "; contact.setNickname(getStrCin());
	std::cout << "  Phone number: "; contact.setPhoneNum(getStrCin());
	std::cout << "Darkest secret: "; contact.setDarkest(getStrCin());
	
	return (contact);
}

int main(void) {
	std::string	opt;
	PhoneBook	phoneBook;
	Contact		newContact;

	while (true)
	{
		menu();
		std::getline(std::cin, opt);
		if (opt == "EXIT" || opt == "exit" || opt == "3")
			break;
		else if (opt == "ADD" || opt == "add" || opt == "1") {
			newContact = getContact();

			if (newContact.getCompleted()) {
				phoneBook.addContact(newContact);
				std::cout << "saved contact!" << std::endl;
			}
			else
				std::cout << "Error, incorrect data entry" << std::endl;
		}
		else if (opt == "SEARCH" || opt == "search" || opt == "2") {
			phoneBook.listContacts();
	
			std::cout << "index: ";
			std::getline(std::cin, opt);
			if ((opt[0] - '0') <= phoneBook.getNumContacts())
				phoneBook.getContact((opt[0] - '0') - 1).printContact();
			else
				std::cout << "Error, index out of range" << std::endl;
		}
		else
			std::cout << "Error! Invalid Option" << std::endl;
	}

	std::cout << "Exiting..." << std::endl;
	return (0);
}
