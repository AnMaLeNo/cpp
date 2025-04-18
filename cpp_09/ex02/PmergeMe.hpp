/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:25:05 by amonot            #+#    #+#             */
/*   Updated: 2025/04/18 18:39:54 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <vector>

class NotFindException : public std::exception {
	public:
		const char *what() const throw() {
			return ("error in merge-insert sort");
		} 
};

void sortDeque(std::deque<int> &tab);
void printDeque(std::deque<int> tab);
void sortVector(std::vector<int> &tab);
void printVector(std::vector<int> tab);

//extern int global;