/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:16:00 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/12/08 21:23:31 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <iomanip>
#include "PmergeMe.hpp"


std::deque<int> parseInDeque(char **sequence) {
	std::deque<int> deq;
	
	// if (!verifySequence(sequence));
	// 	return nullptr;
	
	for (int i = 0; sequence[i]; i++) {
		deq.push_back(atoi(sequence[i]));
	}

	return (deq);
}

std::vector<int> parseInVector(char **sequence) {
	std::vector<int> vec;
	
	// if (!verifySequence(sequence));
	// 	return nullptr;
	
	for (int i = 0; sequence[i]; i++) {
		vec.push_back(atoi(sequence[i]));
	}

	return (vec);
}

bool isDigit(char *argv) {
	for (int i = 0; argv[i]; i++) {
		if (!isdigit(argv[i]))
			return (false);
	}
	
	return (true);
}

bool verifySequence(char *argv[]) {
	for (int i = 0; argv[i]; i++) {
		if (atoi(argv[i]) < 1 || !isDigit(argv[i]))
			return (false);
	}
	
	return (true);
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vetor) {
    for (size_t i = 0; i < vetor.size(); i++) {
        os << vetor[i] << " ";
    }
    return os;
}
std::ostream& operator<<(std::ostream& os, const std::deque<int>& deque) {
    for (size_t i = 0; i < deque.size(); i++) {
        os << deque[i] << " ";
    }
    return os;
}


int main(int argc, char *argv[])
{
	if (argc < 2) {
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return (1);
	}
	
	if (!verifySequence(argv + 1)) {
		std::cerr << "Error: Invalid arguments. Use only positive integer values." << std::endl;
		return (2);
	}

	std::vector<int> vec = parseInVector(argv + 1);
	
	std::set<int> uniqueNums(vec.begin(), vec.end());
	if (uniqueNums.size() != vec.size()) {

		std::cerr << "Error: Invalid arguments. only use unique numbers." << std::endl;
		return (3);
	}


	std::cout << "before: " << vec		<< std::endl;

	clock_t start = clock();
	std::vector<int> sortVec = PmergeMe::vectorSort(vec);
	clock_t end = clock();

	double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	std::cout << std::fixed << std::setprecision(6);

	std::cout << " after: " << sortVec	<< std::endl;
	std::cout << std::endl;
	std::cout << "Time to process a range of " << sortVec.size() << " elements with std::vector : " << elapsed_time << std::endl;

	
	std::deque<int>		deq = parseInDeque(argv + 1);

	clock_t start1 = clock();
	std::deque<int>		sortDeq = PmergeMe::dequeSort(deq);
	clock_t end1 = clock();

	double elapsed_time1 = static_cast<double>(end1- start1) / CLOCKS_PER_SEC;
	std::cout << std::fixed << std::setprecision(6);
	
	std::cout << "Time to process a range of " << sortDeq.size() << " elements with std::deque  : " << elapsed_time1 << std::endl;
	return (0);
}
