#include "PmergeMe.hpp"

// Fonction d'insertion binaire
void binaryInsert(std::vector<int>& sorted, int value)
{
	auto pos = std::lower_bound(sorted.begin(), sorted.end(), value);
	sorted.insert(pos, value);
}

// Algorithme Ford-Johnson (Merge-Insertion Sort) pour std::vector<int>
void fordJohnsonSort(std::vector<int>& arr)
{
	if (arr.size() <= 1)
		return;

	// 1. Former les paires et trier chaque paire
	std::vector<int> mins, maxs;
	size_t i = 0;
	for (; i + 1 < arr.size(); i += 2)
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
	// Si taille impaire, ajouter le dernier élément à mins
	if (i < arr.size())
		mins.push_back(arr[i]);

	// 2. Trier récursivement la liste des mins
	fordJohnsonSort(mins);

	// 3. Insérer chaque max dans la liste triée des mins
	for (size_t j = 0; j < maxs.size(); ++j)
	{
		binaryInsert(mins, maxs[j]);
	}

	// 4. Remplacer arr par la liste triée
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

	std::deque<int> mins, maxs;
	size_t i = 0;
	for (; i + 1 < arr.size(); i += 2)
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
	{
		binaryInsert(mins, maxs[j]);
	}

	arr = mins;
}