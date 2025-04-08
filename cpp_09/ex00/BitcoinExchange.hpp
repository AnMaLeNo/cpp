/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amonot <amonot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:15 by amonot            #+#    #+#             */
/*   Updated: 2025/04/08 17:21:49 by amonot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <map>
#include <exception>

class BitcoinExchange {
	
	public:
		BitcoinExchange(std::string file);
		~BitcoinExchange(void);

		void BtcValueByRate(std::string fileName);
		
		class UnreadableInFileException : public std::exception {
			public:
			const char *what() const throw() {
				return ("Unable to read the in file");
			}
		};
		
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
		BitcoinExchange(const BitcoinExchange &other);
		BitcoinExchange &operator=(const BitcoinExchange &other);

		std::map<std::string, float> _data;
		
		float	exchangeRate(std::string date);
		void	printBtcValueByRate(const std::string &date, float btc);
		bool	checkLine(std::string line);
};
