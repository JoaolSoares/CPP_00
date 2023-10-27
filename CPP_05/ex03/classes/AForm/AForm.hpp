/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:09:38 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/24 20:53:43 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	protected:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
		void 				_verifyGrade(int grade);

	public:
		AForm();
		AForm(int gradeToSign, int gradeToExec);
		AForm(const std::string name);
		AForm(const std::string name, int gradeToSign, int gradeToExec);
		AForm(const AForm &src);

		virtual ~AForm();

		AForm &operator = (const AForm &obj);

		const std::string	getName( void )			const;
		int					getGradeToSign( void )	const;
		int					getGradeToExec( void )	const;
		bool				getSigned( void )		const;

		void			beSigned(Bureaucrat &obj);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class FormNotSigned : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
};

std::ostream &operator << (std::ostream &os, const AForm &obj);

# endif