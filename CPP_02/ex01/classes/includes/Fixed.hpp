/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:35:49 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/02 23:21:00 by jlucas-s         ###   ########.fr       */
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
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();

		Fixed	&operator=(const Fixed &obj);
		Fixed	operator+(const Fixed &obj);

		int		getRawBits(void) const;
		void	setRawBits(int const fixedPoint);

		float	toFloat(void)	const;
		int		toInt(void)		const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

# endif
