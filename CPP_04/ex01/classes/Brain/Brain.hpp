/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:17:57 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/18 18:33:40 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	protected:
		std::string ideas[100];
		
	public:
		Brain();
		Brain(const Brain &src);
		virtual ~Brain();

		Brain &operator = (const Brain &obj);

};

# endif