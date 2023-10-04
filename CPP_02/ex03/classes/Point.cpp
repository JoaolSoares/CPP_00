/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:24:15 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/03 18:42:36 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()								: _x(0), _y(0) {}
Point::Point(const Fixed x, const Fixed y)	: _x(x), _y(y) {}
Point::Point(const Point &src)				: _x(src._x), _y(src._y) {}
Point::~Point() {}

Fixed Point::getX(void) const { return this->_x; }
Fixed Point::getY(void) const { return this->_y; }

Point &Point::operator = (const Point &obj) {
	if (this != &obj) {
		(Fixed)this->_x = obj.getX();
		(Fixed)this->_y = obj.getY();
	}

	return (*this);
}
