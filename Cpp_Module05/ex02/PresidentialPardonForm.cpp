/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:38:09 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/04 16:28:27 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Default Presidential", 25, 5) {
	// std::cout << "default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", 25, 5) {
	// std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	// std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	// std::cout << "default PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
	// std::cout << "Copy PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.GetTarget();
	return (*this);
}

std::string	PresidentialPardonForm::GetTarget(void) const {
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
