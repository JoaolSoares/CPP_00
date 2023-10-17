/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:37:25 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/02 23:23:16 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int n) : _rawBits(n << _fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _rawBits(roundf(n * (1 << _fractionalBits))) {
	std::cout << "Float constructor called"  << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_rawBits = obj._rawBits;

	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return (os);
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_rawBits);
}

void	Fixed::setRawBits(int const fixedPoint) {
	this->_rawBits = fixedPoint;
}


int	Fixed::toInt(void) const {
	return (this->_rawBits >> this->_fractionalBits);
}

float	Fixed::toFloat(void) const {
	return ((float)this->_rawBits / (float)(1 << this->_fractionalBits));
}