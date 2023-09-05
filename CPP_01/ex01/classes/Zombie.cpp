/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:25:18 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/04 23:22:57 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {};
Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " deleted!" <<  std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
