/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:40 by amonot            #+#    #+#             */
/*   Updated: 2025/03/01 16:04:19 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>
#include <iostream>

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

		std::string getName(void) const;
		int	getGrade(void) const;
		void increment(void);
		void decrement(void);

	class GradeTooHighException : public std::exception {
	
		private:
			std::string _message;
	
		public:
			GradeTooHighException(void) : _message("Grade too high") {}
			~GradeTooHighException(void) throw() {}
	
			const char* what() const throw()
			{
				return _message.c_str();
			}
	};

	class GradeTooLowException : public std::exception {
		
	
		private:
			std::string _message;
	
		public:
			GradeTooLowException(void) : _message("Grade too low") {}
			~GradeTooLowException(void) throw() {}
	
			const char* what() const throw()
			{
				return _message.c_str();
			}
	};
};
