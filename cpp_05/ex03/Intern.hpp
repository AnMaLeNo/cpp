/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:55:21 by amonot            #+#    #+#             */
/*   Updated: 2025/03/07 15:04:37 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AForm.hpp"

class Intern {
	
	public:
		Intern(void);
		Intern(const Intern& other);
		~Intern(void);

		Intern &operator=(const Intern &other);

		AForm* makeForm(std::string name, std::string target);
};