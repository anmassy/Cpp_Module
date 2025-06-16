#include "PmergeMe.hpp"

template <typename Container>
void printSequence(const std::string& label, const Container& c)
{
	std::cout << label;
	for (typename Container::const_iterator it = c.begin(); it != c.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template <typename Container>
double sortAndMeasure(Container& c, void (*sortFunc)(Container&))
{
	clock_t start = clock();
	sortFunc(c);
	clock_t end = clock();
	return 1000000.0 * (end - start) / CLOCKS_PER_SEC;
}

int main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Usage: " << argv[0] << " <sequence of positive integers>" << std::endl;
		return 1;
	}

	std::vector<int> vec;
	std::deque<int> deq;
	for (int i = 1; i < argc; ++i)
	{
		int n;
		std::istringstream iss(argv[i]);
		if (!(iss >> n) || n < 0)
		{
			std::cerr << "Error: Invalid positive integer: " << argv[i] << std::endl;
			return 1;
		}
		vec.push_back(n);
		deq.push_back(n);
	}

	printSequence("Before: ", vec);

	std::vector<int> vecSorted = vec;
	std::deque<int> deqSorted = deq;

	double timeVec = sortAndMeasure(vecSorted, fordJohnsonSort);
	double timeDeq = sortAndMeasure(deqSorted, fordJohnsonSort);

	printSequence("After:  ", vecSorted);

	std::cout << "Time to process a range of " << vec.size()
			  << " elements with std::vector : " << std::fixed << std::setprecision(5)
			  << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << deq.size()
			  << " elements with std::deque  : " << std::fixed << std::setprecision(5)
			  << timeDeq << " us" << std::endl;

	return 0;
}