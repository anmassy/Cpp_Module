/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:44:51 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/29 11:36:30 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        Zombie* zombieHorde( int N, std::string name );
        void    getname(std::string name);

    private:
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif