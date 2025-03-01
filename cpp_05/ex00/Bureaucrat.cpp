/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:43 by amonot            #+#    #+#             */
/*   Updated: 2025/02/27 18:36:03 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("bureaucrat"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	_name = name;
	if (grade < 1)
		throw radeTooLowException("Grade too low");
	if (grade > 150)
		throw GradeTooHighException("Grade too high");
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
	_name = other._name;
	_grade = other._grade;
	return (*this);
}
