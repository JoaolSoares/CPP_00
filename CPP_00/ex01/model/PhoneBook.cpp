/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:49:30 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/04 20:18:02 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook(void) {
	this->num_contacts = 0;
}

int		PhoneBook::getNumContacts() { return this->num_contacts; };

std::string PhoneBook::formatForList(std::string str) {
	std::string ret;

	if (str.length() < 10) {
		ret = str;
		for (int i = str.length(); i < 10; i++)
			ret.append(" ");
	} else
		ret = str.substr(0, 9) + ".";
	
	return (ret);
}

void PhoneBook::listContacts(void) {
	std::string opt;

	if (this->num_contacts > 0) {
		std::cout	<< "--------------------------------------------" << std::endl
					<< "| i | First Name | Last Name  | Nickname   |" << std::endl;

	}
	for (int i = 0; i < this->num_contacts; i++) {
		std::cout	<< "--------------------------------------------" << std::endl
					<< "| " << i + 1
					<< " | " + formatForList(contacts[i].getFirstName())
					<< " | " + formatForList(contacts[i].getLastName())
					<< " | " + formatForList(contacts[i].getNickname()) + " |"
					<< std::endl;
					
	}
	std::cout	<< "--------------------------------------------" << std::endl;
}

void	PhoneBook::addContact(Contact new_contact) {
	if (this->num_contacts < MAX_CONTACTS) {
		contacts[this->num_contacts] = new_contact;
		this->num_contacts++;
	}
	else {
		contacts[this->oldest] = new_contact;
		if (this->oldest < MAX_CONTACTS)
			this->oldest++;
		else
			this->oldest = 0;
	}
}

Contact PhoneBook::getContact(int index) {
	if (index <= this->num_contacts)
		return (contacts[index]);

	std::cout	<< "Error, index out of range" << std::endl;
	Contact contact;
	return contact;
}