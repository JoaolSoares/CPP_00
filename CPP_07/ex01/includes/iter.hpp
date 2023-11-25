/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:56:22 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/22 22:58:57 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T *array, size_t size, void (*func)(T &)) {
    if (!array || !func)
        return ;

    for (size_t i = 0; i < size; i ++) {
        func(array[i]);
    }
}