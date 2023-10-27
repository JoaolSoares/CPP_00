/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:09:38 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/25 23:46:17 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
		void 				_verifyGrade(int grade);

	public:
		Form();
		Form(int gradeToSign, int gradeToExec);
		Form(const std::string name);
		Form(const std::string name, int gradeToSign, int gradeToExec);
		Form(const Form &src);

		~Form();

		Form &operator = (const Form &obj);

		const std::string	getName( void )			const;
		int					getGradeToSign( void )	const;
		int					getGradeToExec( void )	const;
		bool				getSigned( void )		const;

		void	beSigned(Bureaucrat &obj);
		

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
};

std::ostream &operator << (std::ostream &os, const Form &obj);

# endif