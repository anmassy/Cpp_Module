/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:52:11 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/06 12:00:45 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
    std::cout << "FragTrap " << this->_name << " constructed" << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap " << this->_name << " destructed" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    if (this->_energypoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy!" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " make a huge high fives" << std::endl;
    this->_energypoints--;
}
