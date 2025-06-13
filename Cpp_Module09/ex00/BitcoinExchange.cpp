#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	// Constructor implementation
	checkData(); // Load data from the CSV file when an instance is created
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) : _quotes(other._quotes)
{
	// Copy constructor implementation
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	// Assignment operator implementation
	if (this != &other)
		_quotes = other._quotes;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
	// Destructor implementation
}

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

		std::getline(iss, date, '|');
		std::getline(iss, valueStr, '|');
		if (!date.empty())
			date = date.erase(date.length() -1);
		if (!isValidDate(date))
		{
			std::cerr << "bad input => " << date << std::endl;
			continue;
		}
		if(!valueStr.empty())
			valueStr = valueStr.erase(0, valueStr.find_first_not_of(" \t"));
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
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	int year = std::stoi(date.substr(0, 4));
	int month = std::stoi(date.substr(5, 2));
	int day = std::stoi(date.substr(8, 2));

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
	double value;
	std::istringstream iss(valueStr);
	double tempVal;
	value = std::stod(valueStr);

	if (valueStr.empty())
	{
		std::cerr << "Error: empty value string." << std::endl;
		return false;
	}
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
