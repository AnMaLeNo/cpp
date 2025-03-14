/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:37 by amonot            #+#    #+#             */
/*   Updated: 2025/03/13 14:16:03 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}

int main(void)
{
	try
	{
		Bureaucrat b("antoine", 2);
		std::cout << "name : " << b.getName() << std::endl;
		std::cout << "grade : " << b.getGrade() << std::endl;
		std::cout << b << std::endl;
		b.increment();

		Bureaucrat c("antoine", 1490);
		c.decrement();
		c.decrement();
	}
	catch (std::exception &e)
	{
		std::cout << "std::exception &e " << e.what() << std::endl;
	}
/* 	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat::GradeTooHighException " <<  e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat::GradeTooLowException " <<  e.what() << std::endl;
	}
 */

	return (0);
}