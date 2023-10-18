/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:04:10 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 16:45:49 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): type("Dog") {
	std::cout << "\033[1;34m[Dog]\033[0m    Default contructor called" << std::endl;	
}

Dog::Dog(const Dog &src) : Animal() {
	std::cout << "\033[1;34m[Dog]\033[0m    Copy contructor called" << std::endl;

	*this = src;
}

Dog::~Dog() {
	std::cout << "\033[1;34m[Dog]\033[0m    Destructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &obj) {
	std::cout << "\033[1;34m[Dog]\033[0m    Copy assignment operator called" << std::endl;

	this->type = obj.type;
	return (*this);
}

std::string Dog::getType( void ) const {
	return (this->type);
}

void Dog::makeSound() const {
	std::cout << "Au! Au!" << std::endl;
}