/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:39 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/21 18:46:57 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNum;
        std::string darkest;

    public:
        Contact::Contact(string firstName, string lastName, string nickname, string phoneNum, string darkest);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNum(void);
        std::string getDarkest(void);
        string Contact::setFirstName(string firstName);
        string Contact::setLastName(string lastName);
        string Contact::setNickname(string nickname);
        string Contact::setPhoneNum(string phoneNum);
        string Contact::setDarkest(string darkest);

};
