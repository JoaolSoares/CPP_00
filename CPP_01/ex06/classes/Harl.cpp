/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:59:45 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/20 00:28:53 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level) {
	std::string	map[4]					= {"debug", "info", "warning", "error"};
	void		(Harl::*funcs[4])(void)	= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	Harl		harl;
	
	for (int i = 0; i < 4; i++) {
		if (level == map[i]) {
			switch(i) {
				case (0):
				case (1):
				case (2):
				case (3):
					for (int j = i; j < 4; j++) {
						(harl.*funcs[j])();
						std::cout << std::endl;
					}
					break;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout	<< "I cannot believe adding extra bacon costs more money."
				<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout	<< "I think I deserve to have some extra bacon for free."
				<< "I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}