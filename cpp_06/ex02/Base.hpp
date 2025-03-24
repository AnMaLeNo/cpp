/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:52:01 by amonot            #+#    #+#             */
/*   Updated: 2025/03/24 18:29:55 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Base { 

	public:
		virtual ~Base(void);
		
		Base * generate(void);
		void identify(Base* p);
		void identify(Base& p);
};