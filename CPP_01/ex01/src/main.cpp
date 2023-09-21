/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:25:15 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/04 23:27:44 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void) {
	int n = 5;

	Zombie *horde = zombieHorde(n, "esquisito");

	for (int i = 0; i < n; i++) {
		horde[i].announce();
	}

	delete[] horde;
	
	return (0);
}