/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:48:15 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:54:40 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
	protected :
		std::string _type;
	
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal	&operator=(Animal const &rhs); 

		virtual void	makeSound(void) const = 0; /*righ now its a abstrait class*/
		std::string getType() const;
};

#endif