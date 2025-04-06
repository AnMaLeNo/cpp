/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:16:58 by amonot            #+#    #+#             */
/*   Updated: 2025/04/06 02:23:40 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template < typename T >
class MutantStack : public std::stack<T> {
	
	public:
		MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin(void);
		iterator end(void);
};

template < typename T >
MutantStack<T>::MutantStack(void)
{}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}
