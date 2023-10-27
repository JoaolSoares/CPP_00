/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:47:24 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/24 17:25:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "[Intern] default contructor" << std::endl;
}


Intern::Intern(const Intern &src)  {
	std::cout << "[Intern] copy contructor" << std::endl;

	*this = src;
}

Intern::~Intern() {
	std::cout << "[Intern] default destructor" << std::endl;
}


Intern &Intern::operator = (const Intern &obj) {
	std::cout << "[Intern] Copy assigment" << std::endl;
	
	if (this == &obj)
		return (*this);

	return (*this);
}


static AForm	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(const std::string form, const std::string target) {
	std::string map[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	AForm *(*funcs[3])(std::string target_funcs) = {&makePresident, &makeRobot, &makeShrubbery};

	for (int i = 0; i < 3; i++) {
		if (form == map[i]) {
			std::cout << "intern creates " << map[i] << std::endl;
			return (funcs[i](target));
		}
	}

	std::cout << "Invalid Form name" << std::cout;
	// throw Bureaucrat::GradeTooLowException();
	return (NULL);
}
