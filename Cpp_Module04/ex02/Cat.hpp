/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:54:02 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:54:06 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	private :
		Brain   *_brain;
		
	public :
		Cat();
		Cat(const Cat &copy);
		~Cat();
		
		Cat& operator=(const Cat &rhs);

		void makeSound(void) const;
};

#endif