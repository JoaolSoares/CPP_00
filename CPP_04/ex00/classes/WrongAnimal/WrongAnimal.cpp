/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:18:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 16:35:16 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :  type("") {
	std::cout << "[WrongAnimal] Default contructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "[WrongAnimal] Copy contructor called" << std::endl;

	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &obj) {
	std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;

	this->type = obj.type;
	return (*this);
}

std::string WrongAnimal::getType( void ) const {
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "cri... cri..." << std::endl;
}

