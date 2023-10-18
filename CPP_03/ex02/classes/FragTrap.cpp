/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:55:20 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/10 19:16:34 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default", 100, 100, 30) {
	std::cout << "\033[1;0m[FragTrap] \033[0m";
	std::cout << "Default contructor called" << std::endl;
}
	
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "\033[1;0m[FragTrap] \033[0m";;
	std::cout << "Name contructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
	std::cout << "\033[1;0m[FragTrap] \033[0m";;
	std::cout << "Copy contructor called" << std::endl;

	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "\033[1;0m[FragTrap] \033[0m";;
	std::cout << this->_name << " Destructor called" << std::endl;
}

FragTrap &FragTrap::operator = (const FragTrap &obj) {
	std::cout << "\033[1;0m[ScavTrap] \033[0m";;
	std::cout << "Copy assignment operator called" << std::endl;

	this->_name			= obj._name;
	this->_hitPoints	= obj._hitPoints;
	this->_energyPoints	= obj._energyPoints;
	this->_attackDamage	= obj._attackDamage;

	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "\033[1;0m[FragTrap] \033[0m";;
	std::cout << "High Five!" << std::endl;
}

