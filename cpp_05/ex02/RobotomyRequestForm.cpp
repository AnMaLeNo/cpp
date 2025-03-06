/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:15:56 by amonot            #+#    #+#             */
/*   Updated: 2025/03/06 17:57:37 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("target", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm(target, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	AForm(other.getName(), 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	(void)other;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == 0)
		throw NotSignedException();
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	std::cout << "\e[0;34m" << "Vrrrr Vrrrr Brrrr Vrrrr" <<  "\e[0m" << std::endl;
	if (rand() % 2)
		std::cout << "\e[0;32m" << this->getName() << " has been robotomized" <<  "\e[0m" << std::endl;
	else
		std::cout << "\e[0;35m" << this->getName() << " robotomy failed" <<  "\e[0m" << std::endl;

}