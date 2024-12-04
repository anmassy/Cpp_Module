/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:35:14 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/18 18:32:47 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("_shrubbery", 25, 5), _target("default") {
	// std::cout << "default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("_shrubbery", 25, 5), _target(target) {
	// std::cout << "basic PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy) {
	// std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	// std::cout << "default PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	// std::cout << "Copy PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void) const {
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}