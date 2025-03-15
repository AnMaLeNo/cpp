/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:55:18 by amonot            #+#    #+#             */
/*   Updated: 2025/03/15 14:34:06 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern::~Intern(void)
{}

Intern& Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	AForm *form = NULL;
	AForm *tmp[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};

	for (int i = 0; i < 3; i++)
	{
		if (tmp[i]->getName() == name)
			form = tmp[i];
		else
			delete tmp[i];
	}
	if (form == NULL)
		std::cout << "\e[0;33mThe form name passed as parameter doesn’t exist\e[0m" << std::endl;
	return (form);
}
