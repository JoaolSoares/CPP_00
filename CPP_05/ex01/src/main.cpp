/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/10/24 17:31:16 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>


int main(void) {
		std::cout << std::endl;
	{
		try {
			Form teste("teste1", 42, 41);
			std::cout << teste << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
	{
		try {
			Form teste("teste2", 0, 1);
			std::cout << "não chegara aqui" << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
	{
		try {
			Form teste("teste3", 200, 150);
			std::cout << "não chegara aqui" << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
	{
		try {
			Form teste("teste4", 10, 100);
			Bureaucrat signer(11);
			teste.beSigned(signer);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
	{
		try {
			Form teste("teste5", 10, 100);
			Bureaucrat signer(9);
			teste.beSigned(signer);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
	{
		try {
			Form teste("teste6", 10, 100);
			Bureaucrat signer(9);
			signer.signForm(teste);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
			std::cout << std::endl;
	{
		try {
			Form teste("teste7", 10, 100);
			Bureaucrat signer(11);
			signer.signForm(teste);
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}
