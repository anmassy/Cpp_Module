/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:09 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/08 12:22:49 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    std::cout << this->_type << " has been create!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->_type << " has been destroy!" << std::endl;
}

void    WrongCat::makeSound(void) const {
    std::cout << "Meow!" << std::endl;
}