/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/22 21:23:23 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
	
Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

int main(void) {
	Base *b = generate();	

	identify(b);
	identify(*b);

	delete b;
}


// ----- Functions ----- //

Base*	generate(void) {
	std::srand((unsigned) time(NULL));

	switch (rand() % 3) {
		case 0:
			return (new A());
			break;
		case 1:
			return (new B());
			break;
		default:
			return (new C());
			break;
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A object" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B object" << std::endl;
	else if ((dynamic_cast<C*>(p)))
		std::cout << "C object" << std::endl;
	else
		std::cout << "Ué, isso dai não é Based não" << std::endl;

}

void	identify(Base& p) {
	try {
		A tmp = dynamic_cast<A&>(p);
		std::cout << "A object" << std::endl;
	}
	catch (std::exception &e) {
		try {
			B tmp = dynamic_cast<B&>(p);
			std::cout << "B object" << std::endl;
		}
		catch (std::exception &e) {
			try {
				C tmp = dynamic_cast<C&>(p);
				std::cout << "C object" << std::endl;
			}
			catch (std::exception &e) {
				std::cout << "Ué, isso dai não é Based não" << std::endl;
			}
		}		
	}
}
