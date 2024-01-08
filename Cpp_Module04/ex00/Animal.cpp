/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:03:05 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/08 11:15:42 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("June") {
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

std::string Animal::getType(void) {
    return (this->_type);
}