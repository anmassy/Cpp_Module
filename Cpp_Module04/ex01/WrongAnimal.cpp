/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:14 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/08 11:35:43 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("June") {
    std::cout << "WrongAnimal " << this->_type << " has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :_type(type) {
    std::cout << "WrongAnimal " << this->_type << " has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal " << this->_type << " has been destroy!" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &rhs) {
    if (this != &rhs) {
        this->_type = rhs._type;
    }
    return (*this);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string WrongAnimal::getType(void) const {
    return (this->_type);
}