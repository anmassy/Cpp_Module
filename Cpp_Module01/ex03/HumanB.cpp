/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:51:30 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/16 11:53:56 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {

	this->_Weapon = NULL;
}

HumanB::~HumanB(void) {
    
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->_Weapon = &weapon;
}

void    HumanB::attack(void) {

	if (!this->_Weapon)
		std::cout << this->_name << " attacks with their " << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}