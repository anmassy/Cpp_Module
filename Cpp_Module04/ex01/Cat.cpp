/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:19:37 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/10 18:56:30 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << this->_type << " has been create!" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &copy) {
    *this = copy;
}

Cat::~Cat(void)
{
    std::cout << this->_type << " has been destroy!" << std::endl;
    delete  this->_brain;
}

Cat& Cat::operator=(const Cat &rhs) {
    if (this != &rhs) {
        this->_type = rhs._type;
        this->_brain = new Brain(*rhs._brain);
    }
    return (*this);
}

void    Cat::makeSound(void) const{
    std::cout << "Meow!" << std::endl;
}