#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) : _vec(other._vec), _deq(other._deq) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	if (this != &other)
	{
		_vec = other._vec;
		_deq = other._deq;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

bool	PmergeMe::parseArgs(int argc, char** argv)
{
	for (int i = 1; i < argc; ++i)
	{
		for (char* p = argv[i]; *p; ++p)
		{
			if (!isdigit(*p))
			{
				std::cerr << "Error: Invalid input. Only positive integers are allowed." << std::endl;
				return false;
			}
		}
	}
	return true;
}

///premier container///
void binaryInsert(std::vector<int>& sorted, int value)
{
	std::vector<int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), value);
	sorted.insert(pos, value);
}

void fordJohnsonSort(std::vector<int>& arr)
{
	if (arr.size() <= 1)
		return;
	std::vector<int> mins;
	std::vector<int> maxs;
	size_t i = 0;
	for (i = 0; i + 1 < arr.size(); i += 2)
	{
		if (arr[i] < arr[i + 1])
		{
			mins.push_back(arr[i]);
			maxs.push_back(arr[i + 1]);
		}
		else
		{
			mins.push_back(arr[i + 1]);
			maxs.push_back(arr[i]);
		}
	}
	if (i < arr.size())
		mins.push_back(arr[i]);
	fordJohnsonSort(mins);
	for (size_t j = 0; j < maxs.size(); ++j)
		binaryInsert(mins, maxs[j]);
	arr = mins;
}

double PmergeMe::sortAndMeasure(std::vector<int>& c, void (*sortFunc)(std::vector<int>&))
{
	clock_t start = clock();
	sortFunc(c);
	clock_t end = clock();
	return 1000000.0 * (end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::printSequence(const std::string& label, const std::vector<int>& c)
{
	std::cout << label;
	for (std::vector<int>::const_iterator it = c.begin(); it != c.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

///second container///
void	jacobsthalSort(size_t index)
{

}

void binaryInsert(std::deque<int>& sorted, int value)
{
	std::deque<int>::iterator pos = std::lower_bound(sorted.begin(), sorted.end(), value);
	sorted.insert(pos, value);
}

void fordJohnsonSort(std::deque<int>& arr)
{
	if (arr.size() <= 1)
		return;
	std::deque<int> mins;
	std::deque<int> maxs;
	size_t i = 0;
	for (i = 0; i + 1 < arr.size(); i += 2)
	{
		if (arr[i] < arr[i + 1])
		{
			mins.push_back(arr[i]);
			maxs.push_back(arr[i + 1]);
		}
		else
		{
			mins.push_back(arr[i + 1]);
			maxs.push_back(arr[i]);
		}
	}
	if (i < arr.size())
		mins.push_back(arr[i]);
	fordJohnsonSort(mins);
	for (size_t j = 0; j < maxs.size(); ++j)
		binaryInsert(mins, maxs[j]);
	arr = mins;
}

double PmergeMe::sortAndMeasure(std::deque<int>& c, void (*sortFunc)(std::deque<int>&))
{
	clock_t start = clock();
	sortFunc(c);
	clock_t end = clock();
	return 1000000.0 * (end - start) / CLOCKS_PER_SEC;
}

void PmergeMe::printSequence(const std::string& label, const std::deque<int>& c)
{
	std::cout << label;
	for (std::deque<int>::const_iterator it = c.begin(); it != c.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

///execute function///
void PmergeMe::execute(int argc, char** argv)
{
	for (int i = 1; i < argc; ++i)
	{
		int n;
		std::istringstream iss(argv[i]);
		if (!(iss >> n) || n < 0)
		{
			std::cerr << "Error: Invalid positive integer: " << argv[i] << std::endl;
			return;
		}
		_vec.push_back(n);
		_deq.push_back(n);
	}
	printSequence("Before: ", _vec);
	double timeVec = sortAndMeasure(_vec, fordJohnsonSort);
	double timeDeq = sortAndMeasure(_deq, fordJohnsonSort);
	printSequence("After:  ", _vec);

	std::cout << "Time to process a range of " << _vec.size() \
			  << " elements with std::vector : " << std::fixed \
			  << std::setprecision(5) << timeVec << " us" << std::endl;

	std::cout << "Time to process a range of " << _deq.size() \
			  << " elements with std::deque  : " << std::fixed \
			  << std::setprecision(5) << timeDeq << " us" << std::endl;
}
