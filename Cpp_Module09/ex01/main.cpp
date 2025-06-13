#include "RPN.hpp"


int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " \"<expression>\"" << std::endl;
		return 1;
	}
	try
	{
		RPN rpn;
		rpn.calculate(argv[1]);
		std::cout << rpn.getResult() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}