/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:47:24 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/26 18:31:42 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {
	std::cout << "\033[1;34m[Bureaucrat]\033[m default contructor" << std::endl;
}
Bureaucrat::Bureaucrat(int grade) : _name("default") {
	std::cout << "\033[1;34m[Bureaucrat]\033[m grade contructor" << std::endl;

	this->_setGrade(grade);
}
Bureaucrat::Bureaucrat(const std::string name) : _name(name), _grade(150) {
	std::cout << "\033[1;34m[Bureaucrat]\033[m name contructor" << std::endl;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	std::cout << "\033[1;34m[Bureaucrat]\033[m name and grade contructor" << std::endl;

	this->_setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	std::cout << "\033[1;34m[Bureaucrat]\033[m copy contructor" << std::endl;

	*this = src;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "\033[1;34m[Bureaucrat]\033[m default destructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj) {
	std::cout << "\033[1;34m[Bureaucrat]\033[m Copy assigment" << std::endl;
	
	if (this == &obj)
		return (*this);
	
	this->_setGrade(obj._grade);

	return (*this);
}

void Bureaucrat::_setGrade(int grade) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what()	const throw() {	return ("Grade too high");	}
const char *Bureaucrat::GradeTooLowException::what()	const throw() {	return ("Grade too Low");	}


void	Bureaucrat::signForm(AForm &form) {
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(AForm &form) {
	try {
		form.execute(*this);
		std::cout << this->_name << "executed  " << form.getName() << std::endl;

	} catch (std::exception &e) {
		std::cout << this->_name << "can't execute Form because: " << e.what() << std::endl;
	}
}



const std::string	Bureaucrat::getName()	const { return (this->_name);	}
int					Bureaucrat::getGrade()	const { return (this->_grade);	}


std::ostream &operator << (std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();

	return (os);
}
