/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:48:37 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 21:46:10 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <cmath>

class RPN {
	private:
		std::stack<int>	_stack;

	public:
		RPN();
		RPN(const RPN &src);
		~RPN();
		RPN &operator = (const RPN &obj);

		int		calculate(std::string expression);
		bool 	operatorsAction(char op);
};
