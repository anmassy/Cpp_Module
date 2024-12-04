#include "Serializer.hpp"

Serializer::Serializer(void) {
	// std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Serializer::~Serializer(void) {
	// std::cout << "Destructor called" << std::endl;
}

Serializer	&Serializer::operator=(Serializer const &rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));

}

std::ostream&	operator<<(std::ostream &o, const Data *rhs) {
	o << "Name: " << rhs->name << std::endl;
	return (o);
}
