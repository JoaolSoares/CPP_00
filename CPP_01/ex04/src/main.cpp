/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:25:46 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/09/19 14:54:30 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

void ft_replace(std::string &line, const std::string s1, const std::string s2) {
    int pos;

    while (true) {
        pos = line.find(s1);
        if (pos == -1)
            break;
        else {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cout   << "Error!\n"
                    << "Invalid number of arguments" << std::endl;
        return (1);
    }

    std::ifstream file(argv[1]);
    if (file.fail()) {
        std::cout   << "Error!\n"
                    << "Invalid file" << std::endl;
        return (2);
    }
    std::ofstream newFile((std::string(argv[1]) + ".replace").c_str());

    std::string buffer;
    while (getline(file, buffer)) {
        ft_replace(buffer, argv[2], argv[3]);
        newFile << buffer << std::endl;
    }

    file.close();
    newFile.close();
    return (0);
}