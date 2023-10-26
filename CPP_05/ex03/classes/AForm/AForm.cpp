/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 21:47:24 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/24 17:25:01 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << "[AForm] default contructor" << std::endl;
}

AForm::AForm(int gradeToSign, int gradeToExec) : _name("default"), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "[AForm] grade contructor" << std::endl;

	this->_verifyGrade(this->_gradeToSign);
	this->_verifyGrade(this->_gradeToExec);
}

AForm::AForm(const std::string name) : _name(name), _signed(false), _gradeToSign(150), _gradeToExec(150) {
	std::cout << "[AForm] name contructor" << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	std::cout << "[AForm] name and grade contructor" << std::endl;

	this->_verifyGrade(this->_gradeToSign);
	this->_verifyGrade(this->_gradeToExec);
}


AForm::AForm(const AForm &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec) {
	std::cout << "[AForm] copy contructor" << std::endl;

	*this = src;
}


AForm::~AForm() {
	std::cout << "[AForm] default destructor" << std::endl;
}


AForm &AForm::operator = (const AForm &obj) {
	std::cout << "[AForm] Copy assigment" << std::endl;
	
	if (this == &obj)
		return (*this);

	return (*this);
}


void AForm::_verifyGrade(int grade) {
	if (grade > 150)
		throw AForm::GradeTooLowException();
	else if (grade < 1)
		throw AForm::GradeTooHighException();
}


const char *AForm::GradeTooHighException::what()	const throw() {	return ("Grade too high");		}
const char *AForm::GradeTooLowException::what()		const throw() {	return ("Grade too Low");		}
const char *AForm::FormNotSigned::what()			const throw() {	return ("Form isn't signed");	}


const std::string	AForm::getName(void)		const { return (this->_name);			}
int					AForm::getGradeToSign(void)	const { return (this->_gradeToSign);	}
int					AForm::getGradeToExec(void)	const { return (this->_gradeToExec);	}
bool				AForm::getSigned(void)		const { return (this->_signed);			}


void	AForm::beSigned(Bureaucrat &obj) {
	if (obj.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	else {
		this->_signed = true;
		std::cout << obj.getName() << " signed in " << this->getName() << std::endl;
	}
}

std::ostream &operator << (std::ostream &os, const AForm &obj) {
	std::string signedStr = (obj.getSigned() == false) ? "false" : "true";

	os	<< obj.getName() << " is signed: "	<< signedStr			<< std::endl
		<< "Grade to sign: " 				<< obj.getGradeToSign()	<< std::endl
		<< "Grade to exec: " 				<< obj.getGradeToExec()	<< std::endl;

	return (os);
}
