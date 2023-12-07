/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:07:25 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/29 11:00:22 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    std::string name;

    std::cout << "choice a name to the Zombie : ";
    std::cin >> name;
    Zombie Z_one(name);
    std::cout << "create a new Zombie : ";
    std::cin >> name;
    Zombie *Z_two = newZombie(name);
    Z_two->announce();
    delete (Z_two);
    std::cout << "create a random Zombie : ";
    std::cin >> name;
    randomChump(name);
}
