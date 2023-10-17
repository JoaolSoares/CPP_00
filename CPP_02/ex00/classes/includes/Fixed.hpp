/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:35:49 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/02 22:03:37 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int					_rawBits;
		static const int	_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &src);
		~Fixed();
		
		Fixed	&operator=(const Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const fixedPoint);
};

# endif