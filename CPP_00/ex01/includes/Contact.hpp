/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:39 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/22 22:34:59 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact {
    private:
        bool        isEmpty;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNum;
        std::string darkest;

    public:
                // Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNum, std::string darkest);
        Contact();
        std::string  getFirstName(void);
        std::string  getLastName(void);
        std::string  getNickname(void);
        std::string  getPhoneNum(void);
        std::string  getDarkest(void);
        void    setFirstName(std::string firstName);
        void    setLastName(std::string lastName);
        void    setNickname(std::string nickname);
        void    setPhoneNum(std::string phoneNum);
        void    setDarkest(std::string darkest);
};
