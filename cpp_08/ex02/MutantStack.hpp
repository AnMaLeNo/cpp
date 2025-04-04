/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:16:58 by amonot            #+#    #+#             */
/*   Updated: 2025/04/04 19:43:29 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template < typename T >
class MutantStack : public std::stack<T> {
	
	public:
		MutantStack(void);

		typename std::stack<int>::container_type::iterator iterator;
		
		std::stack<int>::container_type::iterator begin(void) {
			return (this->c.begin());
		}
		std::stack<int>::container_type::iterator end(void) {
			return (this->c.end());
		}
};

template < typename T >
MutantStack<T>::MutantStack(void)
{}

/* template < typename T >
iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template < typename T >
iterator MutantStack<T>::end(void)
{
	return (this->c.end());
} */
