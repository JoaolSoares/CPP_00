/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:25:50 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/11 23:12:44 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon {
	public:
					Weapon(std::string type);
		void		setType(std::string type);
		std::string	getType(void) const;

	private:
		std::string	_type;
};

# endif