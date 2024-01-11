/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:48:15 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:53:09 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
  
	protected :
		std::string _type;
	
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal    &operator=(Animal const &rhs); 

		virtual void    makeSound(void) const;
		std::string getType() const;
};

#endif