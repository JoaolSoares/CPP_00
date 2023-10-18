/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:04:10 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 19:49:26 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog"), brain(new Brain()) {
	std::cout << "\033[1;34m[Dog]\033[0m    Default contructor called" << std::endl;	
}

Dog::Dog(const Dog &src) : AAnimal() {
	std::cout << "\033[1;34m[Dog]\033[0m    Copy contructor called" << std::endl;

	*this = src;
}

Dog::~Dog() {
	std::cout << "\033[1;34m[Dog]\033[0m    Destructor called" << std::endl;
	
	delete this->brain;
}

Dog &Dog::operator = (const Dog &obj) {
	std::cout << "\033[1;34m[Dog]\033[0m    Copy assignment operator called" << std::endl;

	this->type = obj.type;
	this->brain = obj.brain;

	return (*this);
}

std::string Dog::getType( void ) const {
	return (this->type);
}

void Dog::makeSound() const {
	std::cout << "Au! Au!" << std::endl;
}