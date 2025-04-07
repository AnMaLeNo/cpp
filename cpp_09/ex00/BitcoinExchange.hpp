/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:15 by amonot            #+#    #+#             */
/*   Updated: 2025/04/07 18:19:07 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <map>
#include <exception>

class BitcoinExchange {
	
	public:
		BitcoinExchange(std::string file);
		//BitcoinExchange(const BitcoinExchange &other);
		//BitcoinExchange &operator=(const BitcoinExchange &other);
		//~BitcoinExchange(void);

		float exchangeRate(std::string date);

		class UnreadableDatabaseException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Unable to read the database");
				}
		};

		class NodatabaseException : public std::exception {
			public:
				const char *what() const throw() {
					return ("No database");
				}
		};

		class NodataException : public std::exception {
			public:
				const char *what() const throw() {
					return ("No data");
				}
		};
		
	private:
		std::map<std::string, float> _data;
};
