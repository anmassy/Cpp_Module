#ifndef INTERPRETER_HPP
# define INTERPRETER_HPP

// Includes
# include <iostream>
#include <stdint.h> // otherwise uintptr_t won't compile with c++98 standard
#include "Data.hpp"

// classes
class Serializer {

// private Members
private:

public:
	// Constructors
	Serializer(void);
	Serializer(const Serializer &copy);
	
	// Deconstructors
	~Serializer(void);

	// Overloaded Operators
	Serializer	&operator=(Serializer const &rhs);

	// Public Methods
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);

};

// Ostream overload
std::ostream&	operator<<(std::ostream &o, const Serializer &rhs);

#endif