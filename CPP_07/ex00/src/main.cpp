/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/22 22:32:11 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void) {
    int a   = 1;
    int b   = 2;

    ::swap(a, b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    std::cout << std::endl;

    std::cout << ::max(a, b) << std::endl;
    std::cout << std::endl;
    std::cout << ::min(a, b) << std::endl;
    
    std::cout << std::endl;

    std::string x   = "hello";
    std::string y   = "world";

    ::swap(x, y);
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    std::cout << std::endl;

    std::cout << ::max(x, y) << std::endl;
    std::cout << std::endl;
    std::cout << ::min(x, y) << std::endl;

}
