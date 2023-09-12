/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:49:27 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/31 21:15:13 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

# define MAX_CONTACTS 2

class PhoneBook {
	private:
		Contact		contacts[MAX_CONTACTS];
		int			num_contacts;
		int			oldest;
		std::string	formatForList(std::string str);

	public:
				PhoneBook(void);
		void	listContacts(void);
		Contact getContact(int index);
		int		getNumContacts();
		void	addContact(Contact new_contact);
};

#endif