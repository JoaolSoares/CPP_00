/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:04:10 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 16:45:06 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): type("WrongCat") {
	std::cout << "\033[1;35m\033[1;35m[WrongCat]\033[0m\033[0m    Default contructor called" << std::endl;	
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal() {
	std::cout << "\033[1;35m[WrongCat]\033[0m    Copy contructor called" << std::endl;

	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "\033[1;35m[WrongCat]\033[0m    Destructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &obj) {
	std::cout << "\033[1;35m[WrongCat]\033[0m    Copy assignment operator called" << std::endl;

	this->type = obj.type;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "Miauuu!" << std::endl;
}