/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:19:37 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/08 12:22:08 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
    std::cout << this->_type << " has been create!" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->_type << " has been destroy!" << std::endl;
}

void    Cat::makeSound(void) const{
    std::cout << "Meow!" << std::endl;
}