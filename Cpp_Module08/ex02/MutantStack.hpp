#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <list>
#include <limits>
#include <iterator>

class MustantStack {
	public :
	// Constructors
		MutantStack(void);
		MutantStack(const MutantStack &src);

	// Deconstructors
		~MutantStack(void);

	// Overloaded Operators
		MutantStack &operator=(const MutantStack &src);

	// Public Methods

	// Getter

	private :
	// Private attribut

};

#endif
