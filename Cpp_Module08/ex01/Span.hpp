#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>  // Pour std::find
#include <vector>     // Exemple de conteneur
#include <list>       // Exemple avec list
#include <exception>  // Pour std::exception

class Span {
	public :
	// Constructors
		Span(unsigned int nb);
		Span(const Span &src);

	// Deconstructors
		~Span(void);

	// Overloaded Operators
		Span &operator=(const Span &src);

	// Public Methods
		void addNumber(int nb);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

	// Getter
		unsigned int getSize(void) const;

	private :
	// Private attribut
		std::vector<int> _number;
		unsigned int _size;

	// Constructors
		Span(void);
};

#endif