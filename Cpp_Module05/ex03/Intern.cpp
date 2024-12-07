/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:26:24 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/07 18:04:52 by anmassy          ###   ########.fr       */
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

Form*   Intern::makeForm(std::string name, std::string target) {
	int i = 0;
	std::string formNames[] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};

	Form*  forms[] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};
	while (i < 3) {
		if (name == formNames[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return forms[i];
		}
		i++;
	}
	std::cout << "Intern cannot create " << name << " form" << std::endl;
	return (NULL);
}
