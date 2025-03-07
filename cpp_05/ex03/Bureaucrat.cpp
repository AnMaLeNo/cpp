/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:43 by amonot            #+#    #+#             */
/*   Updated: 2025/03/06 17:07:04 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(void) :
	_name("bureaucrat"),
	_grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	_name = other._name;
	_grade = other._grade;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void Bureaucrat::increment(void)
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrement(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << _name << " couldn’t sign " << form.getName()
			<< " because " << e.what() << std::endl;
		return ;
	}
	std::cout << _name << " signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\e[0;33m" << _name <<  " couldn’t execute " << form.getName()
			<< " because " << e.what() << "\e[0m" << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (os);
}