#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

class Span {
	public:
		Span();
		Span(unsigned int nb);
		Span(const Span &src);
		Span& operator=(const Span &src);
		~Span();

		void addNumber(int number);

		template<typename InputIterator>
		void addRange(InputIterator begin, InputIterator end) {
			if (std::distance(begin, end) + _number.size() > _size)
				throw std::overflow_error("Range too large");
			_number.insert(_number.end(), begin, end);
		}

		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;

		unsigned int getSize() const;

		class SpanFullException : public std::exception {
		public:
			const char* what() const throw() {
				return "Cannot add number: Span is already full.";
			}
		};
		
		class NotEnoughElementsException : public std::exception {
		public:
			const char* what() const throw() {
				return "Not enough elements to calculate a span.";
			}
		};

	private:
		std::vector<int> _number;
		unsigned int _size;
};

#endif
