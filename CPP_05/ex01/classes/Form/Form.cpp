/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:47:24 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/24 17:25:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << "[Form] default contructor" << std::endl;
}

Form::Form(int gradeToSign, int gradeToExec) : _name("default"), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "[Form] grade contructor" << std::endl;

	this->_verifyGrade(this->_gradeToSign);
	this->_verifyGrade(this->_gradeToExec);
}

Form::Form(const std::string name) : _name(name), _signed(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << "[Form] name contructor" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "[Form] name and grade contructor" << std::endl;

	this->_verifyGrade(this->_gradeToSign);
	this->_verifyGrade(this->_gradeToExec);
}


Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec) {
	std::cout << "[Form] copy contructor" << std::endl;

	*this = src;
}


Form::~Form() {
	std::cout << "[Form] default destructor" << std::endl;
}


Form &Form::operator = (const Form &obj) {
	std::cout << "[Form] Copy assigment" << std::endl;
	
	if (this == &obj)
		return (*this);

	return (*this);
}


void Form::_verifyGrade(int grade) {
	if (grade > 150)
		throw Form::GradeTooLowException();
	else if (grade < 1)
		throw Form::GradeTooHighException();
}


const char *Form::GradeTooHighException::what()	const throw() {	return ("Grade too high");	}
const char *Form::GradeTooLowException::what()	const throw() {	return ("Grade too Low");	}


const std::string	Form::getName(void)			const { return (this->_name);			}
int					Form::getGradeToSign(void)	const { return (this->_gradeToSign);	}
int					Form::getGradeToExec(void)	const { return (this->_gradeToExec);	}
bool				Form::getSigned(void)		const { return (this->_signed);			}


void	Form::beSigned(Bureaucrat &obj) {
	if (obj.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else {
		this->_signed = true;
		std::cout << obj.getName() << " signed in " << this->getName() << std::endl;
	}
}


std::ostream &operator << (std::ostream &os, const Form &obj) {
	std::string signedStr = (obj.getSigned() == false) ? "false" : "true";

	os	<< obj.getName() << " is signed: "	<< signedStr			<< std::endl
		<< "Grade to sign: " 				<< obj.getGradeToSign()	<< std::endl
		<< "Grade to exec: " 				<< obj.getGradeToExec()	<< std::endl;

	return (os);
}
