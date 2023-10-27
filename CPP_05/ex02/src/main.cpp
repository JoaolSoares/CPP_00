/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/26 18:55:16 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


int main(void) {
	
	
	std::cout << "---- ShrubberyCreationForm ----" << std::endl;
	{
		Bureaucrat 				b1("jim", 100);
		Bureaucrat 				b2("Dwight Schrute", 140);
		ShrubberyCreationForm	scf;

		std::cout << std::endl;
		try {
			scf.execute(b1);
			scf.beSigned(b1);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			scf.beSigned(b1);
			scf.execute(b1);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		
		try {
			scf.beSigned(b2);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			scf.execute(b2);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "\n---- RobotomyRequestForm ----" << std::endl;
	{
		Bureaucrat 				b1("Micheal Scott", 20);
		Bureaucrat 				b2("Pam", 70);
		RobotomyRequestForm		rrf;

		std::cout << std::endl;
		try {
			rrf.beSigned(b1);
			rrf.execute(b1);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			rrf.beSigned(b1);
			rrf.execute(b1);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		try {
			rrf.beSigned(b2);
			rrf.execute(b2);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
	}
	
	std::cout << "\n---- PresidentialPardonForm ----" << std::endl;
	{
		Bureaucrat 				b1("president", 1);
		PresidentialPardonForm	rrf("target_micheal");

		std::cout << std::endl;
		try {
			rrf.beSigned(b1);
			rrf.execute(b1);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		
		std::cout << std::endl;
	}
	
	return (0);
}
