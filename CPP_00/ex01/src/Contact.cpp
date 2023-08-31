/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:42 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/31 17:48:33 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
    this->completed = false;
}


std::string Contact::getFirstName(void) { return this->firstName;   }
std::string Contact::getLastName(void)  { return this->lastName;    }
std::string Contact::getNickname(void)  { return this->nickname;    }
std::string Contact::getPhoneNum(void)  { return this->phoneNum;    }
std::string Contact::getDarkest(void)   { return this->darkest;     }
bool        Contact::getCompleted(void) { return this->completed;   }


void Contact::setFirstName(std::string firstName) {
    this->firstName = firstName;
    this->completed = this->isCompleted();
}
void Contact::setLastName(std::string lastName) {
    this->lastName  = lastName;
    this->completed = this->isCompleted();
}
void Contact::setNickname(std::string nickname) {
    this->nickname  = nickname;
    this->completed = this->isCompleted();
}
void Contact::setPhoneNum(std::string phoneNum) {
    this->phoneNum  = phoneNum;
    this->completed = this->isCompleted();
}
void Contact::setDarkest(std::string darkest) {
    this->darkest   = darkest;
    this->completed = this->isCompleted();
}

void Contact::printContact(void) {
    std::cout   << "   First name: " + this->firstName  << std::endl 
                << "    Last name: " + this->lastName   << std::endl
                << "     Nickname: " + this->nickname   << std::endl
                << " Phone Number: " + this->phoneNum   << std::endl
                << "Darkes Secret: " + this->darkest    << std::endl;
}

bool Contact::isCompleted(void) {
    if (this->firstName.empty()    ||
        this->lastName.empty()     ||
        this->nickname.empty()     ||
        this->phoneNum.empty()     ||
        this->darkest.empty())
        return false;
    return true;
}