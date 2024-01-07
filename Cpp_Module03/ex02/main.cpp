/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:03:20 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/06 12:01:58 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap person("June");
    
    person.takeDamage(20);
    person.attack("bocal");
    person.beRepaired(15);
    /* June will die */
    person.takeDamage(1000);
    return (0);
}