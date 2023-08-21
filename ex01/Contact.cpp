/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:42 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/21 18:46:52 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
using namespace std;

Contact::Contact(string firstName, string lastName, string nickname, string phoneNum, string darkest) {
    this->firstName     = firstName;
    this->lastName      = lastName;
    this->nickname      = nickname;
    this->phoneNum      = phoneNum;
    this->darkest       = darkest;
}

string Contact::getFirstName(void) {
    return this->firstName;
}
string Contact::getLastName(void) {
    return this->lastName;
}
string Contact::getNickname(void) {
    return this->nickname;
}
string Contact::getPhoneNum(void) {
    return this->phoneNum;
}
string Contact::getDarkest(void) {
    return this->darkest;
}

string Contact::setFirstName(string firstName) {
    this->firstName = firstName;
}
string Contact::setLastName(string lastName) {
    this->lastName = lastName;
}
string Contact::setNickname(string nickname) {
    this->nickname = nickname;
}
string Contact::setPhoneNum(string phoneNum) {
    this->phoneNum = phoneNum;
}
string Contact::setDarkest(string darkest) {
    this->darkest = darkest;
}