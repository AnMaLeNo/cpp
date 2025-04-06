/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 01:48:50 by amonot            #+#    #+#             */
/*   Updated: 2025/04/06 02:46:42 by amonot           ###   ########.fr       */
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
