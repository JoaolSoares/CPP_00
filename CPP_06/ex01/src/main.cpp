/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 22:18:27 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main(void) {
    Data *d1 = new(Data);
    Data *d2;
    uintptr_t s1;
    
    d1->name = "joao";
    std::cout << d1->name << std::endl;

    s1 = Serializer::serialize(d1);
    std::cout << s1 << std::endl;

    d2 = Serializer::deserialize(s1);
    std::cout << d2->name << std::endl;
    
    delete d1;
	return (0);
}
