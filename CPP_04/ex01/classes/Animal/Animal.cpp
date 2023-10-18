/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:18:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 20:01:46 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :  type("") {
	std::cout << "[Animal] Default contructor called" << std::endl;
}


Animal::Animal(const Animal &src) {
	std::cout << "[Animal] Copy contructor called" << std::endl;

	*this = src;
}

Animal::~Animal() {
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal &Animal::operator = (const Animal &obj) {
	std::cout << "[Animal] Copy assignment operator called" << std::endl;

	this->type = obj.type;
	return (*this);
}

std::string Animal::getType( void ) const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "cri... cri..." << std::endl;
}

