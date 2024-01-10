/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:06 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/10 18:46:10 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
    std::cout << this->_type << " has been create!" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &copy) {
    *this = copy;
}

Dog::~Dog(void)
{
    std::cout << this->_type << " has been destroy!" << std::endl;
    delete  this->_brain;
}

Dog& Dog::operator=(const Dog &rhs)
{
    if (this != &rhs) {
        this->_type = rhs._type;
        this->_brain = new Brain(*rhs._brain);
    }
    return *this;
}

void    Dog::makeSound(void) const{
    std::cout << "Ouaf Ouaf!" << std::endl;
}