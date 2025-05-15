#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <list>
#include <limits>
#include <stack>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T> {
	public :
	using iterator = typename std::stack<T>::container_type::iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack &src) : std::stack<T>(src) {}

		~MutantStack() {}

		MutantStack &operator=(const MutantStack &src) {
			if (this != &src) {
				std::stack<T>::operator=(src);
			}
			return *this;
		}

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};

#endif
