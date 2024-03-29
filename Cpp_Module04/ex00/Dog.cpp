/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:23:06 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:53:12 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << this->_type << " has been create!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << this->_type << " has been destroy!" << std::endl;
}

void    Dog::makeSound(void) const{
	std::cout << "Ouaf Ouaf!" << std::endl;
}