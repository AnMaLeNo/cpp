/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:38:20 by amonot            #+#    #+#             */
/*   Updated: 2025/03/03 16:18:02 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

	public:
		AForm(void);
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm(const AForm &other);
		virtual ~AForm(void); // ????

		AForm& operator=(const AForm &other);
		
		std::string getName(void) const;
		bool getSigned(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;

		void beSigned(const Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception {

		private:
			std::string _message;

		public:
			~GradeTooHighException(void) throw() {}
	
			const char* what() const throw()
			{
				return ("Form : Grade too high");
			}
	};

	class GradeTooLowException : public std::exception {
		
	
		private:
			std::string _message;
	
		public:
			~GradeTooLowException(void) throw() {}
	
			const char* what() const throw()
			{
				return ("Form : Grade too low");
			}
	};

	class NotSignedException : public std::exception {
		
	
		private:
			std::string _message;
	
		public:
			~NotSignedException(void) throw() {}
	
			const char* what() const throw()
			{
				return ("Form : form not signed");
			}
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &form);