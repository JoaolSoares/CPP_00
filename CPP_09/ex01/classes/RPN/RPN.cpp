/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:47:54 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/12/04 22:05:30 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static char CHARS_ALLOWED[] = {' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '-', '*', '/'};

RPN::RPN() {}
RPN::RPN(const RPN &src) { *this = src; }
RPN::~RPN() {}
RPN &RPN::operator = (const RPN &obj)
{
	if (this == &obj)
		return (*this);

	*this = obj;
	return (*this);
}


bool RPN::operatorsAction(char op)
{
	switch (op) {
		case '+':
		case '-':
		case '*':
		case '/':
			if (this->_stack.size() < 2)
				throw std::runtime_error("Invalid expression");

			int res;
			int top;

			top = this->_stack.top();

			this->_stack.pop();
			if (op == '+')
				res = top + this->_stack.top();
			if (op == '-')
				res = this->_stack.top() - top;
			if (op == '*')
				res = this->_stack.top() * top;
			if (op == '/')
				res = this->_stack.top() / top;
			this->_stack.pop();
			
			this->_stack.push(res);
			return (true);

		default:
			return (false);
	}
}


static bool	validateExpression(std::string expression)
{
	for (size_t i = 0; i < expression.length(); i++)
	{
		for (int j = 0; j < (int)sizeof(CHARS_ALLOWED); j++)
		{
			if (expression[i] == CHARS_ALLOWED[j])
				break ;
			else if (j == (int)(sizeof(CHARS_ALLOWED)) - 1)
				return false;
		}
	}

	return (true);
}


int	RPN::calculate(std::string expression)
{
	if (!validateExpression(expression))
		throw std::runtime_error("Invalid chars in expression.");

	for (size_t i = 0; i < expression.length(); i++)
	{
		while (expression[i] == ' ')
			i++;
		while (operatorsAction(expression[i]))
		{
			i++;
			while (expression[i] == ' ')
				i++;
		}

		if (i < expression.length())
		{
			char charStr[2] = {expression[i], '\0'};
			this->_stack.push(atoi(charStr));
		}
	}

	if (this->_stack.size() == 1)
		return (this->_stack.top());

	throw std::runtime_error("Invalid expression");
}
