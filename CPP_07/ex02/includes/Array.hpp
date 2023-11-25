/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:47:12 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/24 01:06:45 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>

class Array {
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array<T>(): _size(0) {
			this->_array = new T[0];
		}
	
		Array<T>(unsigned int size): _size(size) {
			this->_array = new T[size];
		}

		Array<T>(const Array &src): _size(src._size) {
			this->_array = NULL;
			*this = src;
		}
	
		~Array<T>() {
			if (this->_array)
				delete [] this->_array;
		}
	
		Array<T> &operator = (const Array &obj) {
			if (this->_array)
				delete [] this->_array;

			if (obj._size > 0) {
				this->_size		= obj._size;
				this->_array	= new T[this->_size];
				
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = obj._array[i];
			}
			return (*this);
		}
		
		T&	operator [] (unsigned int index) {
			if (index >= this->_size || !this->_array)
				throw Array<T>::InvalidIndexException();

			return (this->_array[index]);
		}

		unsigned int size() const { return (this->_size); }


		class InvalidIndexException: public std::exception {
			public:
				virtual const char*	what() const throw();
		};
		
};

template <typename T>
const char*	Array<T>::InvalidIndexException::what() const throw() {
	return ("Invalid index error");
}
