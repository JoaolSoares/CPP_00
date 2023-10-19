/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 20:01:46 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void) {
	Animal *group[20];

	std::cout << "\n[CREATION OF ANIMALS]\n" << std::endl;
	for (int i = 0; i < 20; i++) {
		if (i < 10)
			group[i] = new Dog();
		else
			group[i] = new Cat();
	}

	std::cout << "\n[DELETION OF ANIMALS]\n" << std::endl;
	for (int i = 0; i < 20; i++)
		delete group[i];

	return 0;
}
