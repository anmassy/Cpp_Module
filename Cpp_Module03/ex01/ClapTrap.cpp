/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:08:47 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/04 11:41:44 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0) {
    std::cout << "ClapTrap " << name << " is create" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
    *this = copy;
}

ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap " << this->_name << " is destroy" << std::endl;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs) {
	if (this != &rhs) {
        this->_name = rhs._name;
	    this->_hitpoints = rhs._hitpoints;
	    this->_energypoints = rhs._energypoints;
	    this->_attackdamage = rhs._attackdamage;
    }
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energypoints < 1) {
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy for this action!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attackdamage << " points of damage!" << std::endl;
    this->_energypoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitpoints <= amount) {
        std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
    this->_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energypoints <= amount) {
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy for this action!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " recovers " << amount << " hit points!" << std::endl;
    this->_energypoints -= amount;
    this->_hitpoints += amount;
}
