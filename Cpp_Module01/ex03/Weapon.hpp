/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:35:47 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/12 18:42:17 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP 

#include <iostream>

class Weapon {

    private :
        std::string _type;
    public :
        Weapon(void);
        ~Weapon(void);
        std::string getType(void);
        void    setType(std::string type);
};

#endif