/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:47:12 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/27 12:14:10 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <iterator>
#include <climits>

class Span {
	private:
		unsigned int		_size;
		std::vector<int>	_vector;

	public:
		Span();
		Span(unsigned int size);
		Span(const Span &src);
		~Span();

		Span	&operator = (const Span &obj);

		void	addNumber(int num);
		void	addAllNumber(time_t seed);

		unsigned int shortestSpan()	const;
		unsigned int longestSpan()	const;

		class ItsAlreadyFull : public std::exception {
			const char* what() const throw();
		};
	
		class InsufficientElements : public std::exception {
			const char* what() const throw();
		};
};