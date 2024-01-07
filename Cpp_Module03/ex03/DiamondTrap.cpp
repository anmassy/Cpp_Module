/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:08:36 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/07 15:40:53 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    FragTrap::_hitpoints = 100;
    ScavTrap::_energypoints = 50;
    FragTrap::_attackdamage = 30;
    std::cout << "DiamondTrap " << this->_name << " newborn!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << this->_name << " eliminated!" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}