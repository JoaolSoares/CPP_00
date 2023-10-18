/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:18:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 18:36:51 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "\033[1;35m[Brain]\033[0m  Default contructor called" << std::endl;

	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";
}

Brain::Brain(const Brain &src) {
	std::cout << "\033[1;35m[Brain]\033[0m  Copy contructor called" << std::endl;

	*this = src;
}

Brain::~Brain() {
	std::cout << "\033[1;35m[Brain]\033[0m  Destructor called" << std::endl;
}

Brain &Brain::operator = (const Brain &obj) {
	std::cout << "\033[1;35m[Brain]\033[0m  Copy assignment operator called" << std::endl;

	for (int i = 0; i < 100; i++)
		this->ideas[i] = obj.ideas[i];
		
	return (*this);
}

