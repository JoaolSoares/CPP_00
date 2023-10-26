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

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {
	std::cout << "\033[1;31m[RobotomyRequestForm]\033[m default contructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "\033[1;31m[RobotomyRequestForm]\033[m target contructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src._name, src._gradeToSign, src._gradeToExec), _target(src._target) {
	std::cout << "\033[1;31m[RobotomyRequestForm]\033[m copy contructor" << std::endl;

	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "\033[1;31m[RobotomyRequestForm]\033[m default destructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &obj) {
	std::cout << "\033[1;31m[RobotomyRequestForm]\033[m Copy assigment" << std::endl;
	
	if (this == &obj)
		return (*this);

	return (*this);
}

static int robotomy = 0;

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->_signed == false)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	else {
		if (robotomy++ % 2)
			std::cout << "ziiiiiiiiiiummmmm " <<  this->_target << " robotized succefull" << std::endl;
		else
			std::cout << "robotomy failed..." << std::endl;
	}
}


std::ostream &operator << (std::ostream &os, const RobotomyRequestForm &obj) {
	std::string signedStr = (obj.getSigned() == false) ? "false" : "true";

	os	<< obj.getName() << " is signed: "	<< signedStr			<< std::endl
		<< "Grade to sign: " 				<< obj.getGradeToSign()	<< std::endl
		<< "Grade to exec: " 				<< obj.getGradeToExec()	<< std::endl;

	return (os);
}
