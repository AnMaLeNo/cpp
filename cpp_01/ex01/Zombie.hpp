/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:06:33 by amonot            #+#    #+#             */
/*   Updated: 2024/12/13 18:11:02 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
		void set_name(std::string name);
	private:
		std::string name;
};

#endif