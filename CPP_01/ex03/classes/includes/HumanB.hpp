/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:54:33 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/18 18:46:31 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
					HumanB(std::string name);
		void		setWeapon(Weapon &weapon);
		void		attack(void)	const;

	private:
		std::string	_name;
		Weapon		*_weapon;
};

# endif