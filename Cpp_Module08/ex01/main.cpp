#include "Span.hpp"
#include <vector>
#include <list>
#include <limits>
#include <iterator>

Span::Span(void) : _number(0), _size(0) {
	// std::cout << "Span default Constructor is called" << std::endl;
}

Span::Span(unsigned int nb) : _size(nb) {
	// std::cout << "Span default Constructor is called" << std::endl;
}

Span::Span(const Span &src) : _size(src._size), _number(src._number){
	// std::cout << "Span Copy Constructor called" << std::endl;
	*this = src;
}

Span::~Span(void) {
	// std::cout << "Span Deconstructor called" << std::endl;
}

Span &Span::operator=(const Span &src) {
	if (this == &src) {
		this->_size = src.getSize();
		this->_number = src._number;
	}
	return *this;
}

unsigned int Span::getSize(void) const {
	return (this->_size);
}

void	Span::addNumber(int nb) {
	//ajouter condition si n inferieur a 2 et sir ca depasse size
	this->_number.push_back(nb);
}

// Find the shortest span
unsigned int Span::shortestSpan() const {
	//ajouter condition si n inferieur a 2 et sir ca depasse size
	size_t i = 1;

	std::vector<int> sorted(this->_number);
	std::sort(sorted.begin(), sorted.end());
	int shortest = std::numeric_limits<int>::max();

	while (i < sorted.size()) {
		int difference;

		difference = sorted[i] - sorted[i - 1];
		if (difference < shortest)
			shortest = difference;
		i++;
	}

	return (shortest);
}

unsigned int Span::longestSpan() const {
	//ajouter condition si n inferieur a 2 et sir ca depasse size
	std::vector<int>::const_iterator min = std::min_element(this->_number.begin(), this->_number.end());
	std::vector<int>::const_iterator max = std::max_element(this->_number.begin(), this->_number.end());

	return (*max - *min);
}


int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(2);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}