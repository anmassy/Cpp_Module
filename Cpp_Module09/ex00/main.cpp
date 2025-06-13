#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
		return 1;
	}

	BitcoinExchange exchange;
	exchange.execute(argv[1]);

	return 0;
}