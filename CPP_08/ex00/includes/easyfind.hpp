/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:47:12 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/26 16:12:12 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iterator>
#include <iostream>
#include <exception>

class NotFindOccurrence : public std::exception {
	public:
	char const* what() const throw() {
		return ("Occurrence not find!");
	}		
};

template <typename T>
typename T::iterator easyfind(T &container, int occurrence) {
	typename T::iterator	it;

	it = find(container.begin(), container.end(), occurrence);
	if (it == container.end())
		throw NotFindOccurrence();	

	return (it);
}