/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:19:55 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/27 12:20:07 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {};
Span::Span(unsigned int size) : _size(size) {}
Span::Span(const Span &src) { *this = src; }
Span::~Span() {}

Span	&Span::operator = (const Span &obj) {
	if (this == &obj)
		return (*this);

	*this = obj;
	return (*this);
}

void	Span::addNumber(int num) {
	if (this->_vector.size() >= this->_size)
		throw ItsAlreadyFull();

	this->_vector.push_back(num);
}

void	Span::addAllNumber(time_t seed) {
	srand(seed);

	for (size_t i = 0; i < this->_size; i++) {
		try {
			this->addNumber(rand());
		}
		catch (...) {
			break;
		}
	}
}

unsigned int Span::shortestSpan() const {
	if (this->_size < 2)
		throw InsufficientElements();
		
	std::vector<int> copy(this->_vector);

	unsigned int shortest = UINT_MAX;
	
	for (std::vector<int>::iterator it = copy.begin(); it < copy.end() - 1; it++) {
		if (abs(*it - *(it + 1)) < shortest)
			shortest = abs(*it - *(it + 1));
	}

	return (shortest);
}

unsigned int Span::longestSpan() const {
	if (this->_size < 2)
		throw InsufficientElements();

	return (*std::max_element(this->_vector.begin(), this->_vector.end()) - *std::min_element(this->_vector.begin(), this->_vector.end()));	
}


const char* Span::ItsAlreadyFull::what() const throw() {
	return ("The vector its already full.");
}

const char* Span::InsufficientElements::what() const throw() {
	return ("The number of elements in a vector is insufficiente.");
}
