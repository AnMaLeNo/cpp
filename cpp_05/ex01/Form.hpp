/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:38:20 by amonot            #+#    #+#             */
/*   Updated: 2025/03/02 20:12:26 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;
	
	public:
		Form(void);
		Form(std::string name, int gradeSign, int gradeExec);
		Form(const Form &other);
		~Form(void);

		Form& operator=(const Form &other);
		
		std::string getName(void) const;
		bool getSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;

		void beSigned(const Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception {

		private:
			std::string _message;
	
		public:
			~GradeTooHighException(void) throw() {}
	
			const char* what() const throw()
			{
				return ("From : Grade too high");
			}
	};

	class GradeTooLowException : public std::exception {
		
	
		private:
			std::string _message;
	
		public:
			~GradeTooLowException(void) throw() {}
	
			const char* what() const throw()
			{
				return ("From : Grade too low");
			}
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);