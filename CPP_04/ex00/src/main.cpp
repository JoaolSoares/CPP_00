/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 20:00:26 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	std::cout << "Dog type is: " << j->getType() << " " << std::endl;
	std::cout << "Cat type is: " <<  i->getType() << " " << std::endl;

	std::cout << std::endl;
	
	meta->makeSound();
	j->makeSound();
	i->makeSound();

	std::cout << std::endl;

	const WrongAnimal* wrong = new WrongCat();
	wrong->makeSound();

	std::cout << std::endl;

	delete meta;
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;
	delete wrong;

	return 0;
}
