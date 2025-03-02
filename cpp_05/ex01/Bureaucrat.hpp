/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:40 by amonot            #+#    #+#             */
/*   Updated: 2025/03/02 19:44:41 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>
#include <iostream>
#include "Form.hpp"

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
		void signForm(Form &form);

	class GradeTooHighException : public std::exception {
	
		private:
			std::string _message;
	
		public:
			~GradeTooHighException(void) throw() {}
	
			const char* what() const throw()
			{
				return ("Grade too high");
			}
	};

	class GradeTooLowException : public std::exception {
		
	
		private:
			std::string _message;
	
		public:
			~GradeTooLowException(void) throw() {}
	
			const char* what() const throw()
			{
				return ("Grade too low");
			}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);