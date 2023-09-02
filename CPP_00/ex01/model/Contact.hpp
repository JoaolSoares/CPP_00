/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:39 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/31 20:33:35 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	private:
		std::string 	firstName;
		std::string 	lastName;
		std::string 	nickname;
		std::string 	phoneNum;
		std::string 	darkest;
		bool        	completed;
		bool			isCompleted(void);

	public:
						Contact();
		void   			setFirstName(std::string firstName);
		void   			setLastName(std::string lastName);
		void   			setNickname(std::string nickname);
		void   			setPhoneNum(std::string phoneNum);
		void   			setDarkest(std::string darkest);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getPhoneNum(void);
		std::string		getDarkest(void);
		bool        	getCompleted(void);
		void			printContact(void);
};

#endif