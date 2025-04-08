/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:33:41 by amonot            #+#    #+#             */
/*   Updated: 2025/04/08 17:08:57 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stack>
#include <functional>
#include <cstdlib>

char checkToken(std::string token)
{
	if (token == "+")
		return ('+');
	else if (token == "-")
		return ('-');
	else if (token == "*")
		return ('*');
	else if (token == "/")
		return ('/');
	else if (token == "10")
		return (1);
	else if (token.size() == 1 && isdigit(token[0]))
		return (1);
	return (0);
}

void clac(std::stack<float> &pile, char op)
{
	float tmp;

	if (pile.size() < 2)
		throw ErrorCalculException();
	tmp = pile.top();
	pile.pop();
	if (op == '+')
		pile.top() += tmp;
	else if (op == '-')
		pile.top() -= tmp;
	else if (op == '*')
		pile.top() *= tmp;
	else if (op == '/')
		pile.top() /= tmp;
}

float rpn(std::string expr)
{
	std::stringstream 	ss(expr);
	std::string			token;
	std::stack<float>	pile;

	if (expr[expr.size() - 1] == ' ')
		throw FormatException();
	while (getline(ss, token, ' '))
	{
		if (token.size() == 0 || checkToken(token) == 0)
			throw FormatException();
		if (checkToken(token) == 1)
			pile.push(strtof(token.c_str(), NULL));
		else
			clac(pile, checkToken(token));
		if (ss.eof())
			break;
	}
	return (pile.top());
}
