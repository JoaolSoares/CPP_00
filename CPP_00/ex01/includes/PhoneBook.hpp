/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:49:27 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/31 19:14:46 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook {
	private:
		Contact		contacts[MAX_CONTACTS];
		int			num_contacts;
		int			oldest;
		std::string	formatForList(std::string str);

	public:
		void	listContacts(void);
		void	addContact(Contact new_contact);
};