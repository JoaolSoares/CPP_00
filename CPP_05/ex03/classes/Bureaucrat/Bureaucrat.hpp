/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:09:38 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/26 18:31:34 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
		void				_setGrade(int grade);

	public:
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);

		~Bureaucrat();

		Bureaucrat &operator = (const Bureaucrat &obj);

		const std::string	getName()	const;
		int					getGrade()	const;

		void	signForm(AForm &form);
		void	executeForm(AForm &form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &obj);

# endif