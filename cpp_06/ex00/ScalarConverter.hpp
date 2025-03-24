/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:45:38 by amonot            #+#    #+#             */
/*   Updated: 2025/03/24 16:20:02 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>

class ScalarConverter {

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &other);

	public:
		~ScalarConverter(void);

		ScalarConverter& operator=(const ScalarConverter &other);

		static void convert(std::string literal);
		

		class InvalidArgumentException : public std::exception {
			public:
				virtual const char* what() const throw(){
					return ("Invalide argument"); }
		};

/* 		class OverflowArgumentException : public std::exception {
			public:
				virtual const char* what() const throw(){
					return ("Error Overflow"); }
		}; */

};
