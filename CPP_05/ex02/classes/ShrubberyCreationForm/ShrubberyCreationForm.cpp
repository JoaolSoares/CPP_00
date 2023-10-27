/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:06:18 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/26 17:59:37 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {
	std::cout << "\033[1;33m[ShrubberyCreationForm]\033[m default contructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "\033[1;33m[ShrubberyCreationForm]\033[m target contructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src._name, src._gradeToSign, src._gradeToExec), _target(src._target) {
	std::cout << "\033[1;33m[ShrubberyCreationForm]\033[m copy contructor" << std::endl;

	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "\033[1;33m[ShrubberyCreationForm]\033[m default destructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &obj) {
	std::cout << "\033[1;33m[ShrubberyCreationForm]\033[m Copy assigment" << std::endl;
	
	if (this == &obj)
		return (*this);

	return (*this);
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->_signed == false)
		throw AForm::FormNotSigned();
	else if (executor.getGrade() > this->getGradeToExec())
		throw AForm::GradeTooLowException();
	else {
		std::ofstream outfile(std::string(this->_target).append("_shrubber").c_str());

		for (int i = 0; i < 5; i ++) {
			outfile << "                                                 ."		<< std::endl
					<< "                                      .         ;" 		<< std::endl
					<< "         .              .              ;%     ;;"		<< std::endl
					<< "           ,           ,                :;%  %;" 		<< std::endl
					<< "            :         ;                   :;%;'.,   "	<< std::endl
					<< "   ,.        %;     %;            ;        %;'    ,;"	<< std::endl
					<< "     ;       ;%;  %%;        ,     %;    ;%;    ,%'"	<< std::endl
					<< "      %;       %;%;      ,  ;       %;  ;%;   ,%;'"		<< std::endl
					<< "       ;%;      %;        ;%;        % ;%;  ,%;'" 		<< std::endl
					<< "        `%;.     ;%;     %;'         `;%%;.%;'"			<< std::endl
					<< "         `:;%.    ;%%. %@;        %; ;@%;%'" 			<< std::endl
					<< "            `:%;.  :;bd%;          %;@%;'"				<< std::endl
					<< "              `@%:.  :;%.         ;@@%;'" 				<< std::endl
					<< "                `@%.  `;@%.      ;@@%;" 				<< std::endl
					<< "                  `@%%. `@%%    ;@@%;" 					<< std::endl
					<< "                    ;@%. :@%%  %@@%;"					<< std::endl
					<< "                      %@bd%%%bd%%:;" 					<< std::endl
					<< "                        #@%%%%%:;;" 					<< std::endl
					<< "                        %@@%%%::;"						<< std::endl
					<< "                        %@@@%(o);  . '"					<< std::endl
					<< "                        %@@@o%;:(.,'" 					<< std::endl
					<< "                    `.. %@@@o%::;" 						<< std::endl
					<< "                       `)@@@o%::;" 						<< std::endl
					<< "                        %@@(o)::;" 						<< std::endl
					<< "                       .%@@@@%::;" 						<< std::endl
					<< "                       ;%@@@@%::;." 					<< std::endl
					<< "                      ;%@@@@%%:;;;."					<< std::endl
					<< "                  ...;%@@@@@%%:;;;;,.."					<< std::endl;			
		}
		outfile.close();
	}
}


std::ostream &operator << (std::ostream &os, const ShrubberyCreationForm &obj) {
	std::string signedStr = (obj.getSigned() == false) ? "false" : "true";

	os	<< obj.getName() << " is signed: "	<< signedStr			<< std::endl
		<< "Grade to sign: " 				<< obj.getGradeToSign()	<< std::endl
		<< "Grade to exec: " 				<< obj.getGradeToExec()	<< std::endl;

	return (os);
}
