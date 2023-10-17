/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:37:25 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/03 13:17:34 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _rawBits(0) {
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

Fixed::Fixed(const int n) : _rawBits(n << _fractionalBits) {}

Fixed::Fixed(const float n) : _rawBits(roundf(n * (1 << _fractionalBits))) {}

Fixed::~Fixed() {}


Fixed &Fixed::operator = (const Fixed &obj) {
	if (this != &obj)
		this->_rawBits = obj._rawBits;

	return (*this);
}

std::ostream &operator << (std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return (os);
}

bool	Fixed::operator == (const Fixed &obj) {
	if (this->_rawBits == obj._rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed &obj) {
	if (this->_rawBits != obj._rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator > (const Fixed &obj) {
	if (this->_rawBits > obj._rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator < (const Fixed &obj) {
	if (this->_rawBits < obj._rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed &obj) {
	if (this->_rawBits >= obj._rawBits)
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &obj) {
	if (this->_rawBits <= obj._rawBits)
		return (true);
	return (false);
}

Fixed	Fixed::operator + (const Fixed &obj) {
	return (Fixed(this->toFloat() + obj.toFloat()));
}

Fixed	Fixed::operator - (const Fixed &obj) {
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed	Fixed::operator * (const Fixed &obj) {
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed	Fixed::operator / (const Fixed &obj) {
	return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed	&Fixed::operator ++ (void) {
	this->setRawBits(this->_rawBits + 1);

	return (*this);
}
Fixed	Fixed::operator ++ (int) {
	Fixed old(*this);
	this->setRawBits(this->_rawBits + 1);

	return (old);
}

Fixed	&Fixed::operator -- (void) {
	this->setRawBits(this->_rawBits - (1 << this->_fractionalBits));

	return (*this);
}
Fixed	Fixed::operator -- (int) {
	Fixed old(*this);
	this->setRawBits(this->_rawBits - (1 << this->_fractionalBits));

	return (old);
}


int		Fixed::getRawBits(void) const {
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const fixedPoint) {
	this->_rawBits = fixedPoint;
}


int		Fixed::toInt(void) const {
	return (this->_rawBits >> this->_fractionalBits);
}

float	Fixed::toFloat(void) const {
	return ((float)this->_rawBits / (float)(1 << this->_fractionalBits));
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}