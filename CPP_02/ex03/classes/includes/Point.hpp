/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:24:17 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/03 20:42:11 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include "math.h"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point(const Fixed x, const Fixed y);
		Point(const Point &src);
		~Point();

		Point &operator = (const Point &obj);

		Fixed getX(void) const;
		Fixed getY(void) const;


};

bool bsp( Point const a, Point const b, Point const c, Point const point);


# endif