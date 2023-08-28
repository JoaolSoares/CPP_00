/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:49:27 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/28 14:58:46 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int     num_contats;
        
    public:
        PhoneBook::PhoneBook(void);
        void    addContact(Contact contact);

};