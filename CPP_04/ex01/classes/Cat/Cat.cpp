/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:04:10 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 20:01:46 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat"), brain(new Brain())  {
	std::cout << "\033[1;33m[Cat]\033[0m    Default contructor called" << std::endl;	
}

Cat::Cat(const Cat &src) : Animal() {
	std::cout << "\033[1;33m[Cat]\033[0m    Copy contructor called" << std::endl;

	*this = src;
}

Cat::~Cat() {
	std::cout << "\033[1;33m[Cat]\033[0m    Destructor called" << std::endl;

	delete this->brain;
}

Cat &Cat::operator = (const Cat &obj) {
	std::cout << "\033[1;33m[Cat]\033[0m    Copy assignment operator called" << std::endl;

	this->type = obj.type;
	this->brain = obj.brain;
	
	return (*this);
}

std::string Cat::getType( void ) const {
	return (this->type);
}

void Cat::makeSound() const {
	std::cout << "Miauuu!" << std::endl;
}