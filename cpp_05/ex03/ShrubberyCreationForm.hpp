/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:10:50 by amonot            #+#    #+#             */
/*   Updated: 2025/03/06 17:21:42 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {

	private:
		std::string _target;

	public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	void execute(Bureaucrat const & executor) const;

};
