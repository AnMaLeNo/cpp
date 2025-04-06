/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:15 by amonot            #+#    #+#             */
/*   Updated: 2025/04/06 19:13:09 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <map>

class BitcoinExchange {
	
	public:
		BitcoinExchange(std::string file);
		//BitcoinExchange(const BitcoinExchange &other);
		//BitcoinExchange &operator=(const BitcoinExchange &other);
		//~BitcoinExchange(void);
		
	private:
		std::map<std::string, float> _data;
}