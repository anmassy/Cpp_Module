#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;

		double	sortAndMeasure(std::vector<int>& c, void (*sortFunc)(std::vector<int>&));
		void	printSequence(const std::string& label, const std::vector<int>& c);
	
		double	sortAndMeasure(std::deque<int>& c, void (*sortFunc)(std::deque<int>&));
		void	printSequence(const std::string& label, const std::deque<int>& c);
		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();
		
		bool	parseArgs(int argc, char** argv);
		void	execute(int argc, char** argv);
};

void	binaryInsert(std::vector<int>& sorted, int value);
void	fordJohnsonSort(std::vector<int>& arr);

void	binaryInsert(std::deque<int>& sorted, int value);
void	fordJohnsonSort(std::deque<int>& arr);

#endif