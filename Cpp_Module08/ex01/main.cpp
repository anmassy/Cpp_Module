#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
	// try {
		std::cout << "=== Test du sujet ===" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		// try {
		// 	sp.addNumber(42);
		// }
		// catch (const std::exception& e) {
		// 	std::cout << "Expected error: " << e.what() << std::endl;
		// }

		// std::cout << "\n=== Test avec addRange ===" << std::endl;
		// std::vector<int> vec;
		// for (int i = 0; i < 100; ++i)
		// 	vec.push_back(rand() % 1000);
		// Span rangeSpan(150);
		// rangeSpan.addRange(vec.begin(), vec.end());
		// std::cout << "Shortest span in rangeSpan: " << rangeSpan.shortestSpan() << std::endl;
		// std::cout << "Longest span in rangeSpan: " << rangeSpan.longestSpan() << std::endl;
		// try {
		// 	rangeSpan.addRange(vec.begin(), vec.end());
		// }
		// catch (const std::exception& e) {
		// 	std::cout << "Expected range error: " << e.what() << std::endl;
		// }

		// std::cout << "\n=== Test avec un span trop petit ===" << std::endl;
		// try {
		// 	Span small(1);
		// 	small.addNumber(5);
		// 	small.shortestSpan();
		// }
		// catch (const std::exception& e) {
		// 	std::cout << "Expected span error: " << e.what() << std::endl;
		// }

		// std::cout << "\n=== Test avec un enorme span ===" << std::endl;
		// Span bigSpan(10000);
		// for (int i = 0; i < 10000; ++i)
		// 	bigSpan.addNumber(i * 3);
		// std::cout << "Shortest: " << bigSpan.shortestSpan() << std::endl;
		// std::cout << "Longest: " << bigSpan.longestSpan() << std::endl;
		
	// }
	// catch (const std::exception& e) {
	// 	std::cerr << "error: " << e.what() << std::endl;
	// }

	return 0;
}
