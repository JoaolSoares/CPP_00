/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:59:33 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/20 00:11:36 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char *argv[]) {
	Harl h;

	if (argc != 2) {
		std::cout	<< "Error!\n"
					<< "Invalid number of arguments" << std::endl;
		return (1);
	}

	h.complain(argv[1]);

	return (0);
}