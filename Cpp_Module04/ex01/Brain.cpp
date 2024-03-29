/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:06:42 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:51:07 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain created." << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
}

Brain::~Brain(void) {
	std::cout << "Brain destroyed." << std::endl;
}

Brain& Brain::operator=(const Brain &rhs)
{
	int i = 0;
	if (this != &rhs) {
		while (i < 100) {
			this->_ideas[i] = rhs._ideas[i];
			i++;
		}
	}
	return *this;
}