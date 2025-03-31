/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:48:21 by amonot            #+#    #+#             */
/*   Updated: 2025/03/31 15:54:48 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>

template< typename T, typename F >
void iter(T *ptr, size_t size, F fun)
{
	while (size > 0)
	{
		fun(*ptr);
		ptr++;
		size--;
	}
}
