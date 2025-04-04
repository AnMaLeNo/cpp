/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 01:48:54 by amonot            #+#    #+#             */
/*   Updated: 2025/04/04 16:29:17 by amonot           ###   ########.fr       */
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
		void addNumbers(std::vector<int>::const_iterator it, std::vector<int>::const_iterator eit);
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
