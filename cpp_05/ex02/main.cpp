/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:14:37 by amonot            #+#    #+#             */
/*   Updated: 2025/03/13 15:19:34 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
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

int main(void)
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
}
