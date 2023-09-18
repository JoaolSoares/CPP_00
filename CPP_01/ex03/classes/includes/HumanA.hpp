/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:54:05 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/18 18:35:23 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
					HumanA(std::string name, Weapon &weapon);
		void		attack(void)	const;

	private:
		std::string	_name;
		Weapon		&_weapon;
};

# endif