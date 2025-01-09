/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:26:24 by anmassy           #+#    #+#             */
/*   Updated: 2025/01/09 23:15:33 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	// std::cout << "default Intern constructor called" << std::endl;
}

Intern::Intern( const Intern& src ) {
	// std::cout << "Copy Intern constructor called" << std::endl;
	*this = src;
}

Intern::~Intern(void) {
	// std::cout << "default Intern destructor called" << std::endl;
}

Intern& Intern::operator=( const Intern& rhs ) {
	// std::cout << "Copy Intern assignment operator called" << std::endl;
	return (*this);
}

Form* Intern::makeForm(std::string name, std::string target) {
	int i = 0;
	int j = 0;
	
	std::string formNames[] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	Form* forms[] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};
	while (i < 3) {
		if (name == formNames[i]) {
			std::cout << "Intern creates " << name << std::endl;
			while (j < 3) {
				if (j != i)
					delete forms[j];
				j++;
			}
			return forms[i];
		}
		i++;
	}
	j = 0;
	while (j < 3) {
		if (j != i)
			delete forms[j];
		j++;
	}
	std::cout << "Intern cannot create " << name << " form" << std::endl;
	return (NULL);
}
