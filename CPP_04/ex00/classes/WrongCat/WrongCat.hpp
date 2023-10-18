/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:02:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 19:58:37 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	private:
		std::string type;
	
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();
		
		WrongCat &operator = (const WrongCat &obj);
		
		void makeSound() const;

};

# endif