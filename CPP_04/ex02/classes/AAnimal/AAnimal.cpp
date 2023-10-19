/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:18:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 19:49:41 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() :  type("") {
	std::cout << "[Animal] Default contructor called" << std::endl;
}


AAnimal::AAnimal(const AAnimal &src) {
	std::cout << "[Animal] Copy contructor called" << std::endl;

	*this = src;
}

AAnimal::~AAnimal() {
	std::cout << "[Animal] Destructor called" << std::endl;
}

AAnimal &AAnimal::operator = (const AAnimal &obj) {
	std::cout << "[Animal] Copy assignment operator called" << std::endl;

	this->type = obj.type;
	return (*this);
}

std::string AAnimal::getType( void ) const {
	return (this->type);
}

void AAnimal::makeSound() const {
	std::cout << "cri... cri..." << std::endl;
}

