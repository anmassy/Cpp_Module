#include <iostream>
#include "Serializer.hpp"
#include "Data.hpp"

int main(int argc, char const *argv[])
{
	Data ptr;
	Data new_ptr;

	ptr.name = "Antoine";
	// new_ptr.name = "Alice";
	
	std::cout << "Avant les modifications" << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << ptr.name << std::endl;
	// std::cout << &new_ptr << std::endl;
	// std::cout << new_ptr.name << std::endl;
	std::cout << std::endl;

	Serializer exec;
	Data *resetData = exec.deserialize(exec.serialize(&ptr));

	std::cout << "Apres les modifications" << std::endl;
	std::cout << resetData << std::endl;
	std::cout << resetData->name << std::endl;
	// std::cout << &new_ptr <<  std::endl;
	// std::cout << new_ptr.name << std::endl;

	return (0);
}
