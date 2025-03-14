/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:37 by amonot            #+#    #+#             */
/*   Updated: 2025/03/14 16:21:49 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <exception>
#include <iostream>

/* int main(void)
{
	Bureaucrat lenny("Lenny", 145);
	Bureaucrat antoine("Antoine", 137);
	AForm* shrubberyForm = new ShrubberyCreationForm("home");

	lenny.executeForm(*shrubberyForm);
	antoine.executeForm(*shrubberyForm);
	lenny.signForm(*shrubberyForm);
	lenny.executeForm(*shrubberyForm);
	antoine.executeForm(*shrubberyForm);
	return (0);
} */

/* int main(void)
{
	Bureaucrat lenny("Lenny", 72);
	Bureaucrat antoine("Antoine", 45);
	AForm* shrubberyForm = new RobotomyRequestForm("home");

	lenny.executeForm(*shrubberyForm);
	antoine.executeForm(*shrubberyForm);
	lenny.signForm(*shrubberyForm);
	lenny.executeForm(*shrubberyForm);
	antoine.executeForm(*shrubberyForm);

	return (0);
} */

/* int main(void)
{
	AForm* shrubberyForm = new RobotomyRequestForm("+++++++++++++++++++++++++");
	AForm* shrubberyForm2 = new RobotomyRequestForm("-------------------------");

	std::cout << shrubberyForm->getName() << std::endl;
	std::cout << shrubberyForm2->getName() << std::endl;

	shrubberyForm = shrubberyForm2;

	std::cout << shrubberyForm->getName() << std::endl;
	std::cout << shrubberyForm2->getName() << std::endl;

	return (0);
} */

/* int main(void)
{
	Bureaucrat lenny("Lenny", 25);
	Bureaucrat antoine("Antoine", 5);
	AForm* shrubberyForm = new PresidentialPardonForm("luc");

	lenny.executeForm(*shrubberyForm);
	antoine.executeForm(*shrubberyForm);
	lenny.signForm(*shrubberyForm);
	lenny.executeForm(*shrubberyForm);
	antoine.executeForm(*shrubberyForm);

	return (0);
} */

int main(void)
{
	Bureaucrat lenny("Lenny", 72);
	Bureaucrat antoine("Antoine", 45);
	Intern intern;
	AForm* form;

	form = intern.makeForm("shrubbery creation", "Bender");
	if (form != NULL)
	{
		lenny.executeForm(*form);
		antoine.executeForm(*form);
		lenny.signForm(*form);
		lenny.executeForm(*form);
		antoine.executeForm(*form);
	}

	return (0);
}