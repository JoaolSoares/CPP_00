/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:42:26 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/04 20:47:04 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float ft_abs(float n) {
	if (n < 0)
		return (n * -1);
	return (n);
}

static float area(Point const a, Point const b, Point const c) {
	return ((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat()) +
			 b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) +
			 c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float area_abc = ft_abs(area(a, b, c));
	float area_pbc = ft_abs(area(point, b, c));
	float area_pac = ft_abs(area(point, a, c));
	float area_pab = ft_abs(area(point, a, b));

	return (area_abc == area_pbc + area_pac + area_pab);
}
