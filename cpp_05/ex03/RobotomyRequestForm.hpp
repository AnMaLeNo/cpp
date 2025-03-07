/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:16:04 by amonot            #+#    #+#             */
/*   Updated: 2025/03/07 14:27:56 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm {

	private:
		std::string _target;

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		~RobotomyRequestForm(void);

		RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

		void execute(Bureaucrat const & executor) const;
};
