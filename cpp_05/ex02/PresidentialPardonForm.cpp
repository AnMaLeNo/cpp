/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:17:35 by amonot            #+#    #+#             */
/*   Updated: 2025/03/06 19:29:02 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("target", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm(target, 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	AForm(other.getName(), 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm* other)
{
	(void)other;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == 0)
		throw NotSignedException();
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	std::cout << "\e[0;34m" << this->getName() << " has been pardoned by Zaphod Beeblebrox.\e[0m" << std::endl;
}