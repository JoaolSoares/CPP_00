/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/30 19:10:22 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Error: invalid number of arguments." << std::endl;
        return (1);
    }
    
    try {
        BitcoinExchange btce;

        btce.inputPath = argv[1];
        btce.readInput();
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;

        return (2);
    }

	return (0);
}
