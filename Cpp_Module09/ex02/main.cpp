#include "PmergeMe.hpp"


int main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Usage: " << argv[0] << " <sequence of positive integers>" << std::endl;
		return 1;
	}

	// 1. Parse input into vector and deque
	std::vector<int> vec;
	std::deque<int> deq;
	for (int i = 1; i < argc; ++i)
	{
		int n;
		std::istringstream iss(argv[i]);
		if (!(iss >> n) || n < 0) {
			std::cerr << "Error: Invalid positive integer: " << argv[i] << std::endl;
			return 1;
		}
		vec.push_back(n);
		deq.push_back(n);
	}

	// 2. Display original sequence
	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size(); ++i)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	// 3. Sort and time with vector
	std::vector<int> vecSorted = vec;
	clock_t startVec = clock();
	fordJohnsonSort(vecSorted);
	clock_t endVec = clock();

	// 4. Sort and time with deque
	std::deque<int> deqSorted = deq;
	clock_t startDeq = clock();
	// Vous devez écrire une version fordJohnsonSort pour std::deque<int>
	fordJohnsonSort(deqSorted); // À implémenter dans PmergeMe.hpp/.cpp
	clock_t endDeq = clock();

	// 5. Display sorted sequence
	std::cout << "After:  ";
	for (size_t i = 0; i < vecSorted.size(); ++i)
		std::cout << vecSorted[i] << " ";
	std::cout << std::endl;

	// 6. Display timing
	double timeVec = 1000000.0 * (endVec - startVec) / CLOCKS_PER_SEC;
	double timeDeq = 1000000.0 * (endDeq - startDeq) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << vec.size()
			  << " elements with std::vector : " << std::fixed << std::setprecision(5)
			  << timeVec << " us" << std::endl;
	std::cout << "Time to process a range of " << deq.size()
			  << " elements with std::deque  : " << std::fixed << std::setprecision(5)
			  << timeDeq << " us" << std::endl;

	return 0;
}