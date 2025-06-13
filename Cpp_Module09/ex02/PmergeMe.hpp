#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <ctime>
#include <iomanip>

void binaryInsert(std::vector<int>& sorted, int value);
void fordJohnsonSort(std::vector<int>& arr);

void binaryInsert(std::deque<int>& sorted, int value);
void fordJohnsonSort(std::deque<int>& arr);

#endif