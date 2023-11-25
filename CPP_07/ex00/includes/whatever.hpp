/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:56:22 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/22 22:27:46 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b) {
    T tmp   = a;

    a = b;
    b = tmp;
}

template <typename T>
T max(T a, T b) {
    return (a >= b) ? a : b;
}

template <typename T>
T min(T a, T b) {
    return (a <= b) ? a : b;
}
