/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:39 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/28 14:45:05 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNum;
        std::string darkest;

    public:
        Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNum, std::string darkest);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNum(void);
        std::string getDarkest(void);
        std::string Contact::setFirstName(std::string firstName);
        std::string Contact::setLastName(std::string lastName);
        std::string Contact::setNickname(std::string nickname);
        std::string Contact::setPhoneNum(std::string phoneNum);
        std::string Contact::setDarkest(std::string darkest);

};
