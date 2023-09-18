/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:46 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/18 13:43:37 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// char * ft_replace(const std::string s1, const std::string s2) {
    
// }

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cout   << "Error!\n"
                    << "Invalid number of arguments" << std::endl;
        return (1);
    }

    std::ifstream file(argv[1]);
    std::ofstream newFile(".replace");

    std::string buffer;

    while (getline(file, buffer)) {
        std::cout << buffer << std::endl; // teste
        newFile << buffer << std::endl;
    }



    file.close();
    newFile.close();
    return (0);
}