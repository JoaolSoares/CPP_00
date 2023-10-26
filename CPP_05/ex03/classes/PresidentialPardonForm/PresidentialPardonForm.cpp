/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:06:18 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/26 17:59:37 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {
	std::cout << "\033[1;32m[PresidentialPardonForm]\033[m default contructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "\033[1;32m[PresidentialPardonForm]\033[m target contructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src._name, src._gradeToSign, src._gradeToExec), _target(src._target) {
	std::cout << "\033[1;32m[PresidentialPardonForm]\033[m copy contructor" << std::endl;

	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "\033[1;32m[PresidentialPardonForm]\033[m default destructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &obj) {
	std::cout << "\033[1;32m[PresidentialPardonForm]\033[m Copy assigment" << std::endl;
	
	if (this == &obj)
		return (*this);

	return (*this);
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->_signed == false)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	else {
		std::cout << "Informs that " << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}


std::ostream &operator << (std::ostream &os, const PresidentialPardonForm &obj) {
	std::string signedStr = (obj.getSigned() == false) ? "false" : "true";

	os	<< obj.getName() << " is signed: "	<< signedStr			<< std::endl
		<< "Grade to sign: " 				<< obj.getGradeToSign()	<< std::endl
		<< "Grade to exec: " 				<< obj.getGradeToExec()	<< std::endl;

	return (os);
}
