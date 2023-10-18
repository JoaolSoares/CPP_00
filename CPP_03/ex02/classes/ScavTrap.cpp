/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:59:13 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/05 02:24:43 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap("default", 100, 50, 20) {
	std::cout << "\033[1;31m[ScavTrap] \033[0m";
	std::cout << "Default contructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "\033[1;31m[ScavTrap] \033[0m";;
	std::cout << "Name contructor called" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	std::cout << "\033[1;31m[ScavTrap] \033[0m";;
	std::cout << "Copy contructor called" << std::endl;

	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "\033[1;31m[ScavTrap] \033[0m";;
	std::cout << this->_name << " Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj) {
	std::cout << "\033[1;31m[ScavTrap] \033[0m";;
	std::cout << "Copy assignment operator called" << std::endl;

	this->_name			= obj._name;
	this->_hitPoints	= obj._hitPoints;
	this->_energyPoints	= obj._energyPoints;
	this->_attackDamage	= obj._attackDamage;

	return (*this);
}

void ScavTrap::attack(const std::string& target) {
	std::cout << "\033[1;31m[ScavTrap] \033[0m";;
	if (this->_energyPoints > 0 && this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "insufficient number of energy points" << std::endl;
	else if ( this->_hitPoints <= 0)
		std::cout << this->_name << " is dead!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "\033[1;31m[ScavTrap] \033[0m";;
	std::cout << this->_name << " is now in Gate keeper mode!" << std::endl;
}
