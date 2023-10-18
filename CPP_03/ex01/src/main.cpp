/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:05:02 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/05 02:31:07 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {

	ScavTrap s1;
	ScavTrap s2("Optimus Prime");

	s1.attack("Scourge");
	s2.attack("Unicron");
	s1.guardGate();
	
	for (int i = 0; i < 26; i++) {
		s2.attack("megatron");
		s2.beRepaired(1);
	}

	s1.takeDamage(100);
	s1.attack("Overlord");

	return (0);
}