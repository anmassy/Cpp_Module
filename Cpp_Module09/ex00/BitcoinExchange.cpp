#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	checkData();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _quotes(other._quotes) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		_quotes = other._quotes;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::checkData()
{
	std::ifstream file("data.csv");
	if (!file.is_open())
	{
		std::cerr << "Error: could not open data.csv." << std::endl;
		return;
	}
	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date;
		std::string valueStr;

		std::getline(iss, date, ',');
		std::getline(iss, valueStr, ',');
		_quotes[date] = std::stod(valueStr);
	}
	file.close();
}

std::string BitcoinExchange::trim(const std::string& s)
{
	size_t start = s.find_first_not_of(" \t\r\n");
	size_t end = s.find_last_not_of(" \t\r\n");
	if (start == std::string::npos || end == std::string::npos)
		return "";
	return s.substr(start, end - start + 1);
}

void	BitcoinExchange::execute(const std::string& filename)
{
	std::ifstream file(filename);
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}
	std::string line;
	std::getline(file, line);
	while (line.empty())
		std::getline(file, line);
	line = trim(line);
	if (line != "date | value")
	{
		std::cerr << "Error: invalid format in file. Expected 'date | value' as the first line." << std::endl;
		file.close();
		return;
	}
	while (std::getline(file, line))
	{
		std::istringstream iss(line);
		std::string date;
		std::string valueStr;

		if (line.empty())
			continue;
		size_t count = 0;
		for (size_t i = 0; line[i]; ++i)
		{
			if (line[i] == '|')
				count++;
		}
		if (count != 1 || line[line.length() - 1] == '|')
		{
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (count == 1)
		{
			std::getline(iss, date, '|');
			std::getline(iss, valueStr, '|');
		}
		if (!date.empty())
			date = date.erase(date.length());
		date = trim(date);
		if (!isValidDate(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		if(!valueStr.empty())
			valueStr = valueStr.erase(0, valueStr.find_first_not_of(" \t"));
		valueStr = trim(valueStr);
		if (isValidValue(valueStr))
			printResult(date, valueStr);
	}
	file.close();
}

void	BitcoinExchange::printResult(const std::string& date, const std::string& valueStr)
{
	std::map<std::string, double>::iterator it = _quotes.find(date);
	double	value = std::stod(valueStr);
	if (it != _quotes.end())
		std::cout << date << " => " << value << " = " << value * it->second << std::endl;
	else
	{
		std::map<std::string, double>::iterator it2 = _quotes.lower_bound(date);
		if (it2 == _quotes.begin())
			std::cout << date << " => " << value << " = " << value * it2->second << std::endl;
		else
		{
			it2--;
			std::cout << date << " => " << value << " = " << value * it2->second << std::endl;
		}
	}
}

bool	BitcoinExchange::isValidDate(const std::string& date)
{
	if (date.length() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	int year = std::stoi(date.substr(0, 4));
	int month = std::stoi(date.substr(5, 2));
	int day = std::stoi(date.substr(8, 2));

	if (year == 2009 && month == 1 && day < 2)
		return false;

	if (month < 1 || month > 12 || day < 1 || day > 31)
		return false;

	if ((month == 2 && day > 29) || (month == 2 && day == 29 && !(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))))
		return false;
	
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;

	if (year < 2009 || year > 2022)
		return false;
	
	return true;
}

bool	BitcoinExchange::isValidValue(const std::string& valueStr)
{
	if (valueStr.empty())
	{
		std::cerr << "Error: empty value string." << std::endl;
		return false;
	}
	for (size_t i = 0; valueStr[i]; ++i)
	{
		if ((!isdigit(valueStr[i]) && valueStr[i] != '.') || valueStr[valueStr.length() - 1] == '.')
		{
			std::cerr << "Error: not a positive number." << std::endl;
			return false;
		}
	}
	double value;
	value = std::stod(valueStr);
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}
