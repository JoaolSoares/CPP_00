/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 22:25:50 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/04 22:48:27 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
	public:
		void		announce(void);
					Zombie(std::string name);
					~Zombie(void) ;

	private:
		std::string	name;
};

# endif