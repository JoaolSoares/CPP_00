/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 21:11:09 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Error!\nInvalid number of arguments" << std::endl;
		return (1);
	}
	
	ScalarConverter::convert(argv[1]);

	return (0);
}

/*
int main(void)
{
    std::cout << "input: 'c'" << std::endl;
    ScalarConverter::convert("c");
    std::cout << std::endl;
    
    std::cout << "input: \"42\"" << std::endl;
    ScalarConverter::convert("42");
    std::cout << std::endl;
    
    std::cout << "input: \"62.123f\"" << std::endl;
    ScalarConverter::convert("62.123f");
    std::cout << std::endl;
    
    std::cout << "input: \"22.421\"" << std::endl;
    ScalarConverter::convert("22.421");
    std::cout << std::endl;
    
    std::cout << "input: \"0\"" << std::endl;
    ScalarConverter::convert("0");
    std::cout << std::endl;
    
    std::cout << "input: \"nan\"" << std::endl;
    ScalarConverter::convert("nan");
    std::cout << std::endl;
    
    std::cout << "input: \"+inf\"" << std::endl;
    ScalarConverter::convert("+inf");
    std::cout << std::endl;
	
    std::cout << "input: \"suco addes de maca\"" << std::endl;
    ScalarConverter::convert("suco addes de maca");
    std::cout << std::endl;
	
    return 0;
}
*/