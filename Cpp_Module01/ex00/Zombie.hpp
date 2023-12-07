/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:44:51 by anmassy           #+#    #+#             */
/*   Updated: 2023/11/28 19:28:48 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie(std::string getname);
        ~Zombie(void);
        void announce(void);
        Zombie *newZombie(std::string name);
        void randomChump(std::string name);

    private:
        std::string _name;
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif