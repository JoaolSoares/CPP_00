/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:47:12 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/27 18:15:18 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &src) : std::stack<T>(src) { *this = src; }
		~MutantStack() {}

		MutantStack	&operator = (const MutantStack &obj) {
			if (*this != obj)
				*this = obj;
			return (*this);
		}


		iterator begin() {
			return (this->c.begin());
		}

		iterator end() {
			return (this->c.end());
		}
};