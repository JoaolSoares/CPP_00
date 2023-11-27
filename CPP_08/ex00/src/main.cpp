/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 01:24:52 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/26 16:14:38 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    std::vector<int> v1(array, array + sizeof(array) / sizeof(int));
    std::vector<int> v2;

    // Find
    std::cout << *easyfind(v1, 2) << std::endl;

    // Not Find
    {
        try {
            std::cout << *easyfind(v1, 10) << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Error catch: " << e.what() << std::endl;
        }
    }

    {
        try {
            std::cout << *easyfind(v2, 2) << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Error catch: " << e.what() << std::endl;
        }
    }

    return (0);
}