/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:20:03 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:52:41 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain   *_brain;
		
	public :
		Dog();
		Dog(const Dog &copy);
		~Dog();
		
		Dog& operator=(const Dog &rhs);

		void makeSound(void) const;
};

#endif

