/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 01:48:54 by amonot            #+#    #+#             */
/*   Updated: 2025/04/06 03:01:42 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <exception>

class Span {

	public:
		Span(void);
		Span(const unsigned int n);
		Span(const Span &other);
		~Span(void);
	
		Span &operator=(const Span &other);
		void addNumber(int nbr);
		template < typename T >
		void addNumbers(T first, T last);
		int shortestSpan(void);
		int longestSpan(void);

	private:
		std::vector<int>	_v;
		unsigned int		_n;
	
	class NotEnoughSpaceException : public std::exception {
		public:
			const char *what() const throw() {
				return ("Not enough space");
		}
	};

	class NoSpanException : public std::exception {
		public:
			const char *what() const throw() {
				return ("No Span");
			}
	};

};

template < typename T >
void Span::addNumbers(T it, T ite)
{
	if (_v.size() + ite - it > _n)
		throw NotEnoughSpaceException();
	_v.insert(_v.end(), it, ite);
}
