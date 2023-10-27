/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/23 23:56:32 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


int main(void) {
	{
		try {
			Bureaucrat teste(42);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		
	}
	
	{
		try {
			Bureaucrat teste(0);
			std::cout << "não chegara aqui" << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		try {
			Bureaucrat teste(200);
			std::cout << "não chegara aqui" << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	


	return (0);
}
