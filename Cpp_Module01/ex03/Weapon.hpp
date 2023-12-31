/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:35:47 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/16 11:47:03 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP 

#include <iostream>

class Weapon {

    private :
        std::string _type;
    public :
        Weapon(std::string type);
        ~Weapon(void);
        std::string& getType(void);
        void    setType(std::string type);
};

#endif