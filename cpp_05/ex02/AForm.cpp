/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:38:08 by amonot            #+#    #+#             */
/*   Updated: 2025/03/05 16:57:22 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

AForm::AForm(void) :
	_name("form"),
	_signed(0),
	_gradeSign(150),
	_gradeExec(150)
{}

AForm::AForm(std::string name, int gradeSign, int gradeExec) :
	_name(name),
	_signed(0),
	_gradeSign(gradeSign),
	_gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : 
	_name(other._name),
	_signed(other._signed),
	_gradeSign(other._gradeSign),
	_gradeExec(other._gradeExec)
{}

AForm::~AForm(void) {}

AForm& AForm::operator=(const AForm &other)
{
	_signed = other._signed;
	return (*this);
}

std::string AForm::getName(void) const
{
	return (_name);
}

bool AForm::getSigned(void) const
{
	return (_signed);
}

int AForm::getGradeSign(void) const
{
	return (_gradeSign);
}

int AForm::getGradeExec(void) const
{
	return (_gradeExec);
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeSign)
		throw GradeTooLowException();	
	_signed = 1;
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
	os << "form name : " << form.getName()
		<< "; is signed : " << form.getSigned()
		<< "; grade required to sign it : " << form.getGradeSign()
		<< "; grade required to execute : " << form.getGradeExec();
	return (os);
}
