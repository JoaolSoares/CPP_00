/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:05:02 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/05 22:13:45 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) {

	FragTrap s1;
	FragTrap s2("Optimus Prime");

	s1.attack("Scourge");
	s2.attack("Unicron");

	for (int i = 0; i < 55; i++) {
		s2.attack("megatron");
		s2.beRepaired(1);
	}

	s1.takeDamage(100);
	s1.attack("Overlord");

	s1.highFivesGuys();
	
	return (0);
}