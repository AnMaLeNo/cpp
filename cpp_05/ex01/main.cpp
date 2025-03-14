/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:37 by amonot            #+#    #+#             */
/*   Updated: 2025/03/13 14:34:37 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <exception>
#include <iostream>

int main(void)
{
	Bureaucrat b("antoine", 3);
	
	try
	{
		std::cout << "name : " << b.getName() << std::endl;
		std::cout << "grade : " << b.getGrade() << std::endl;
		std::cout << b << std::endl;
		b.increment();

		Bureaucrat c("antoine", 149);
		c.decrement();
		c.decrement();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat::GradeTooHighException " <<  e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat::GradeTooLowException " <<  e.what() << std::endl;
	}

	Form f("42form", 42, 1);

	std::cout << f << std::endl;
	b.signForm(f);

	Bureaucrat b2("b2", 11);

	try
	{
		Form f2("test", 10, 11);
		b2.signForm(f2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return (0);
}