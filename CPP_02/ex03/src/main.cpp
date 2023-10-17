/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 00:35:31 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/04 20:48:28 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main(void) {
	Point a(Fixed(1), Fixed(2));
	Point b(Fixed(2), Fixed(1));
	Point c(Fixed(3), Fixed(3.2f));

	Point p(Fixed(1.2f), Fixed(3.2f));

	if (bsp(a, b, c, p) == true)
		std::cout << "Its inside :)" << std::endl;
	else
		std::cout << "Its outside :(" << std::endl;
		
	return (0);
}
