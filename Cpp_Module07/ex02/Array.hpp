#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array {
	public :
		Array(void);
		Array(unsigned int n);
		Array(Array const &copy);
		~Array(void);

		Array	&operator=(Array const &rhs);
		T& operator[](unsigned int index);


		int size(void) const;

		class OutOfBoundsException : public std::exception {
		public:
			const char *what(void) const throw();
		};

	private :
		int _size;
		T *_array;
};

#endif