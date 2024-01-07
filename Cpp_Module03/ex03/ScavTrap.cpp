/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:48:57 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/04 12:05:24 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 100;
    std::cout << "ScavTrap " << this->_name << " exists!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap " << this->_name << " has been delete!" << std::endl;
}

void    ScavTrap::attack( std::string const& target )
{
    if (this->_energypoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", inflict " << this->_attackdamage << " points of damage!" << std::endl;
    this->_energypoints -= 1;
}

void ScavTrap::guardGate(void) {

    std::cout << "ScavTrap " << this->_name << ": keeper mode activated" << std::endl;
}