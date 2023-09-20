/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:59:33 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/19 23:32:51 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void) {
	Harl h;

	h.complain("debug");
	std::cout << std::endl;
	h.complain("info");
	std::cout << std::endl;
	h.complain("warning");
	std::cout << std::endl;
	h.complain("error");
	std::cout << std::endl;
	h.complain("algumacoisa");

	return (0);
}