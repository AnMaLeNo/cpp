/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:40 by amonot            #+#    #+#             */
/*   Updated: 2025/02/27 18:35:45 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>

class GradeTooHighException : public std::exception {
	
	private:
		std::string _message;

	public:
		GradeTooHighException(std::string message) : _message(message) {}
		~GradeTooHighException(void) throw() {}

		const char* what() const throw()
		{
			return _message.c_str();
		}
};

class radeTooLowException : public std::exception {
	
	private:
		std::string _message;

	public:
		radeTooLowException(std::string message) : _message(message) {}
		~radeTooLowException(void) throw() {}

		const char* what() const throw()
		{
			return _message.c_str();
		}
};

class Bureaucrat {

	private:
		std::string _name;
		int			_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat(void);

		Bureaucrat& operator=(const Bureaucrat& other);
};
