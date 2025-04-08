/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:33:42 by amonot            #+#    #+#             */
/*   Updated: 2025/04/08 17:00:20 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <exception>

float rpn(std::string expr);

class FormatException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Format error");
		}
};

class ErrorCalculException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Error in calcul");
		}
};