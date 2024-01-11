/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:32:12 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:53:16 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
  
	protected :
		std::string _type;
	
	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal();

		WrongAnimal    &operator=(WrongAnimal const &rhs); 

		void    makeSound(void) const;
		std::string getType() const;
};

#endif