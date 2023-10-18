/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:02:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 19:49:26 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public AAnimal {
	private:
		std::string type;
	
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		
		Cat &operator = (const Cat &obj);

		std::string getType( void ) const;
		
		void makeSound() const;

};

# endif