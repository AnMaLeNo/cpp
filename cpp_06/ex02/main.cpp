/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:41:49 by amonot            #+#    #+#             */
/*   Updated: 2025/03/24 18:32:24 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main(void)
{
	Base b;
	Base *tmp;
	void *i = NULL;

	for (int i = 0; i < 10; i++)
	{
		tmp = b.generate();
		b.identify(tmp);
		b.identify(*tmp);
	}
	b.identify((Base *)i);
	b.identify(*(Base *)i);
	return (0);
}
