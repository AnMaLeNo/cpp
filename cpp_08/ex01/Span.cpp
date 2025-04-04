/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 01:48:50 by amonot            #+#    #+#             */
/*   Updated: 2025/04/04 16:57:11 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span(void) : _n(0)
{}

Span::Span(const unsigned int n) : _n(n)
{}

Span::Span(const Span &other)
{
	if (this != & other)
	{
		_v = other._v;
		_n = other._n;
	}
}

Span::~Span(void)
{}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_v = other._v;
		_n = other._n;
	}
	return (*this);
}

void Span::addNumber(int nbr)
{
	if (_v.size() < _n)
		_v.push_back(nbr);
	else
		throw NotEnoughSpaceException();
}

void Span::addNumbers(std::vector<int>::const_iterator it, std::vector<int>::const_iterator eit)
{
	if (_v.size() + eit - it > _n) // !!!! last - first ?
		throw NotEnoughSpaceException();
	while (it != eit)
	{
		_v.push_back(*it);
		it++;
	}
}

int Span::shortestSpan(void)
{
	if (_v.size() < 2)
		throw NoSpanException();
	std::sort(_v.begin(), _v.end());
	int span = _v[1] - _v[0];
	for (size_t i = 1; i < _v.size(); i++)
	{
		if (_v[i] - _v[i - 1] < span)
			span = _v[i] - _v[i - 1];
	}
	return (span);
}

int Span::longestSpan(void)
{
	if (_v.size() < 2)
		throw NoSpanException();
	std::sort(_v.begin(), _v.end());
	return (_v[_v.size() - 1] - _v[0]);
}

/* template < typename T >
void Span::addN(T first, T last)
{
	if (_v.size() + last - first > _n) // !!!! last - first ?
	throw NotEnoughSpaceException();
	while (first != last)
	{
		_v.push_back(*first);
		first++;
	}
	//_v.insert(_v.end(), first, last);
} */