/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:07:25 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/16 10:44:17 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

    std::string name;
    int N;
    std::cout << "choice a name :";
    std::cin >> name;
    std::cout << "choice number Zombie :";
    std::cin >> N;
    Zombie *createZomb = zombieHorde(N, name);
    int i = 0;
    while (i < N)
        createZomb[i++].announce();
    delete [] createZomb;
    return (0);
}
