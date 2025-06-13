#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double> _quotes;

		bool	isValidDate(const std::string& date);
		bool	isValidValue(const std::string& valueStr);
		void	printResult(const std::string& date, const std::string& valueStr);
		void	checkData();

	
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		~BitcoinExchange();

		void	execute(const std::string& filename);
};

#endif