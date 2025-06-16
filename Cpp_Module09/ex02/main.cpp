#include "PmergeMe.hpp"

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Usage: " << argv[0] << " <sequence of positive integers>" << std::endl;
		return 1;
	}
	PmergeMe pmergeMe;
	if (!pmergeMe.parseArgs(argc, argv))
		return 1;
	pmergeMe.execute(argc, argv);
	return 0;
}