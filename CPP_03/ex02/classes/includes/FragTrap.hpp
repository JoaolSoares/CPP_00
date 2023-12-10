/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:05:14 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/05 22:09:00 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap {
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		FragTrap &operator = (const FragTrap &obj);

		void highFivesGuys(void);

};


# endif