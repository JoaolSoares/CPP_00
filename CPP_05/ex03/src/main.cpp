/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/26 19:33:29 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>


int main(void) {
	Intern i;

	AForm *form = i.makeForm("RobotomyRequestForm", "targeto");
	std::cout << std::endl;
	AForm *form2 = i.makeForm("PresidentialPardonForm", "targeto");
	std::cout << std::endl;
	AForm *form3 = i.makeForm("ShrubberyCreationForm", "targeto");
	std::cout << std::endl;
	AForm *form4 = i.makeForm("Formulario", "targeto");

	std::cout << std::endl;
	delete form;
	std::cout << std::endl;
	delete form2;
	std::cout << std::endl;
	delete form3;
	std::cout << std::endl;
	delete form4;
	
	return (0);
}
