/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:17:57 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 16:27:38 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
		
	public:
		Animal();
		Animal(const Animal &src);
		virtual ~Animal();

		Animal &operator = (const Animal &obj);

		virtual std::string getType( void ) const;
		
		virtual void makeSound() const;
};

# endif