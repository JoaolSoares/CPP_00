/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:48:37 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 21:46:10 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

typedef struct Data {
	std::string name;

}	Data;

class Serializer {
	private:

	public:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
		Serializer &operator = (const Serializer &obj);
		

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

};

