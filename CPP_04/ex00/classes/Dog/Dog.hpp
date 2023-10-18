/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:02:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 19:49:26 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public AAnimal {
	private:
		std::string type;
	
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		
		Dog &operator = (const Dog &obj);

		std::string getType( void ) const;
		
		void makeSound() const;

};

# endif