/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:03:05 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:53:38 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("June") {
	std::cout << "Animal " << this->_type << " has been created!" << std::endl;
}

Animal::Animal(std::string type) :_type(type) {
	std::cout << "Animal " << this->_type << " has been created!" << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal(void) {
	std::cout << "Animal " << this->_type << " has been destroy!" << std::endl;
}

Animal  &Animal::operator=(Animal const &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->_type);
}