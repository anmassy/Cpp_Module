#include "PmergeMe.hpp"

void binaryInsert(std::vector<int>& sorted, int value)
{
	auto pos = std::lower_bound(sorted.begin(), sorted.end(), value);
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

void binaryInsert(std::deque<int>& sorted, int value)
{
	auto pos = std::lower_bound(sorted.begin(), sorted.end(), value);
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
