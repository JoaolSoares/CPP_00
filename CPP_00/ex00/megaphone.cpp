/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:45:27 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/08/31 19:17:11 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; argv[i]; i++) {
        for (int j = 0; argv[i][j]; j++)
            std::cout << (char)std::toupper(argv[i][j]);
    }
    std::cout << std::endl;

    return (0);
}
