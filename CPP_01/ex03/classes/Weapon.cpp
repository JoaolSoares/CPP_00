/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 23:53:26 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/11 23:12:39 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)	{ this->_type = type;	}

void		Weapon::setType(std::string type)	{ this->_type = type;	}
std::string	Weapon::getType(void) const			{ return (this->_type);	}
