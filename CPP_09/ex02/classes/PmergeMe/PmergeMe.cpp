/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlucas-s <jlucas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:47:54 by jlucas-s          #+#    #+#             */
/*   Updated: 2023/12/01 14:34:06 by jlucas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe &src) { *this = src; }
PmergeMe::~PmergeMe() {}
PmergeMe &PmergeMe::operator = (const PmergeMe &obj)
{
	if (this == &obj)
		return (*this);

	*this = obj;
	return (*this);
}

static std::vector<s_c_group> v_parseInGroups(std::vector<int> vec) {
	std::vector<s_c_group> retVec;

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		s_c_group group;

		group.members.push_back(*it);
		group.bigger = *it;

		retVec.push_back(group);
	}
	return (retVec);
}

static void v_sortInsideGroups(std::vector<s_c_group> *vec) {

	for (PmergeMe::vec_group_iterator it = vec->begin(); it != vec->end(); it++) {
		if (it + 1 != vec->end()) {
			if (it->bigger > (it + 1)->bigger) {
				it->members.insert(it->members.begin(), (it + 1)->members.begin(), (it + 1)->members.end());
				vec->erase(it + 1);
			}
			else {
				it->members.insert(it->members.end(), (it + 1)->members.begin(), (it + 1)->members.end());
				it->bigger = (it + 1)->bigger;
				vec->erase(it + 1);
			}
		}
		else
			break;
	}
}


template <typename T>
static void swap(T& a, T& b) {
    T tmp = a;

    a = b;
    b = tmp;
}

static PmergeMe::vec_group_iterator v_partition(PmergeMe::vec_group_iterator left, PmergeMe::vec_group_iterator right) {
	int							pivot	= left->bigger; 
	PmergeMe::vec_group_iterator	i		= left;

	for (PmergeMe::vec_group_iterator j = left + 1; j <= right; j++) {
		if (j->bigger <= pivot) {
			i++;
			swap(*i, *j);
		}
	}
	swap(*left, *i);

	return (i);
}

static void v_sortGroups(PmergeMe::vec_group_iterator left, PmergeMe::vec_group_iterator right) {
	if (left < right) {
		PmergeMe::vec_group_iterator pivot = v_partition(left, right);

		v_sortGroups(left, pivot - 1);
		v_sortGroups(pivot + 1, right);
	}
}

static void v_insertionSort(std::vector<int> *vec, int num) {
    int low = 0;
    int high = vec->size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if ((*vec)[mid] == num) {
            vec->insert(vec->begin() + mid + 1, num);
            return;
        }
		else if ((*vec)[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }

    vec->insert(vec->begin() + low, num);
}

static void v_sortChainPend(std::vector<int> *chain, std::vector<int> pend, int odd) {
	for (size_t i = 0; i < pend.size(); i++) {
		v_insertionSort(chain, pend[i]);
	}
	if (odd > 0)
		v_insertionSort(chain, odd);
}

static std::vector<int> v_chainPend(std::vector<s_c_group> *vec) {
	std::vector<int>	sortVec;
	std::vector<int> 	chain;
	std::vector<int> 	pend;
	int					odd = 0;

	for (size_t i = 0; i < vec->size(); i++) {
		if ((*vec)[i].members.size() > 1) {
			chain.push_back((*vec)[i].members[1]);
			pend.push_back((*vec)[i].members[0]);
		}
		else
			odd = (*vec)[i].members[0];
	}
	v_sortChainPend(&chain, pend, odd);

	return (chain);
}


std::vector<int>	PmergeMe::vectorSort(std::vector<int> vecToSort) {
	std::vector<s_c_group> groupVec;
	std::vector<int> sortVec;

	groupVec = v_parseInGroups(vecToSort);

	v_sortInsideGroups(&groupVec);

	v_sortGroups(groupVec.begin(), groupVec.end() - 1);

	sortVec = v_chainPend(&groupVec);

	return (sortVec);
}



// Deque

static std::deque<s_d_group> d_parseInGroups(std::deque<int> vec) {
	std::deque<s_d_group> retDeq;

	for (std::deque<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		s_d_group group;

		group.members.push_back(*it);
		group.bigger = *it;

		retDeq.push_back(group);
	}
	return (retDeq);
}

static void d_sortInsideGroups(std::deque<s_d_group> *deq) {
	for (PmergeMe::deq_group_iterator it = deq->begin(); it != deq->end(); it++) {
		if (it != deq->end() || it + 1 != deq->end()) {
			if (it->bigger > (it + 1)->bigger) {
				it->members.push_front((it + 1)->members[0]);
				deq->erase(it + 1);
			}
			else {
				it->members.push_back((it + 1)->members[0]);
				it->bigger = (it + 1)->bigger;
				deq->erase(it + 1);
			}
			if (it + 1 != deq->end())
				it++;
		}
		else
			break;
	}
}


static PmergeMe::deq_group_iterator d_partition(PmergeMe::deq_group_iterator left, PmergeMe::deq_group_iterator right) {
	int							pivot	= left->bigger; 
	PmergeMe::deq_group_iterator	i		= left;

	for (PmergeMe::deq_group_iterator j = left + 1; j <= right; j++) {
		if (j->bigger <= pivot) {
			i++;
			swap(*i, *j);
		}
	}
	swap(*left, *i);

	return (i);
}

static void d_sortGroups(PmergeMe::deq_group_iterator left, PmergeMe::deq_group_iterator right) {
	if (left < right) {
		PmergeMe::deq_group_iterator pivot = d_partition(left, right);

		d_sortGroups(left, pivot - 1);
		d_sortGroups(pivot + 1, right);
	}
}

static void d_insertionSort(std::deque<int> *deq, int num) {
    int low = 0;
    int high = deq->size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if ((*deq)[mid] == num) {
            deq->insert(deq->begin() + mid + 1, num);
            return;
        }
		else if ((*deq)[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }

    deq->insert(deq->begin() + low, num);
}

static void d_sortChainPend(std::deque<int> *chain, std::deque<int> pend, int odd) {
	for (size_t i = 0; i < pend.size(); i++) {
		d_insertionSort(chain, pend[i]);
	}
	if (odd > 0)
		d_insertionSort(chain, odd);
}

static std::deque<int> d_chainPend(std::deque<s_d_group> *deq) {
	std::deque<int>	sortdeq;
	std::deque<int> chain;
	std::deque<int> pend;
	int				odd = 0;

	for (size_t i = 0; i < deq->size(); i++) {
		if ((*deq)[i].members.size() > 1) {
			chain.push_back((*deq)[i].members[1]);
			pend.push_back((*deq)[i].members[0]);
		}
		else
			odd = (*deq)[i].members[0];
	}
	d_sortChainPend(&chain, pend, odd);

	return (chain);
}

std::deque<int>	PmergeMe::dequeSort(std::deque<int> deqToSort) {
	std::deque<s_d_group> groupDeq;
	std::deque<int> sortDeq;

	groupDeq = d_parseInGroups(deqToSort);

	d_sortInsideGroups(&groupDeq);
	

	d_sortGroups(groupDeq.begin(), groupDeq.end() - 1);

	sortDeq = d_chainPend(&groupDeq);

	return (sortDeq);
}




			// if (it->members.size() == (it + 1)->members.size() && (it + 1) != deq->end() - 1) {
			// 	if (it->bigger > (it + 1)->bigger) {
			// 		it->members.insert(it->members.begin(), (it + 1)->members.begin(), (it + 1)->members.end());
			// 		deq->erase(it + 1);
			// 	}
			// 	else {
			// 		it->members.insert(it->members.end(), (it + 1)->members.begin(), (it + 1)->members.end());
			// 		it->bigger = (it + 1)->bigger;
			// 		deq->erase(it + 1);
			// 	}
			// }
			// else {
			// 	it->members.insert(it->members.end(), (it + 1)->members.begin(), (it + 1)->members.end());
			// 	deq->erase(it + 1);
			// }