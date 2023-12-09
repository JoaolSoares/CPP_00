/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:48:37 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/11/16 21:46:10 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cmath>

typedef struct s_c_group {
	std::vector<int>			members;
	int							bigger;

}	t_c_group;

typedef struct s_d_group {
	std::deque<int>			members;
	int						bigger;

}	t_d_group;


class PmergeMe
{
	private:
		

	public:
		typedef typename std::vector<s_c_group>::iterator	vec_group_iterator;
		typedef typename std::vector<int>::iterator			vec_int_iterator;

		typedef typename std::deque<s_d_group>::iterator	deq_group_iterator;
		typedef typename std::deque<int>::iterator			deq_int_iterator;
	
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		~PmergeMe();
		PmergeMe &operator = (const PmergeMe &obj);

		static std::vector<int>	vectorSort(std::vector<int> vec);
		static std::deque<int>	dequeSort(std::deque<int> deq);

};
