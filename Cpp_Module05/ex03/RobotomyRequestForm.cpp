/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:27:47 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/07 17:55:26 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("_shrubbery", 72, 45), _target("default") {
	// std::cout << "default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("_shrubbery", 72, 45), _target(target) {
	// std::cout << "basic RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy) {
	// std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	// std::cout << "default RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {
	// std::cout << "Copy RobotomyRequestForm assignment operator called" << std::endl;
	if (this != &rhs)
		this->_target = rhs.getTarget();
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void) const {
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	static int i;
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	if (i % 2 == 0)
		std::cout << "MMMH EUUUH " << this->_target << "is robotomized !!" << std::endl;
	else
		std::cout << "OUF " << this->_target << "is an human !!" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, RobotomyRequestForm const &form)
{
	return (str << form.getName() << " form, signed: " << form.getSigned() << ", sign grade: " << form.getGradeToSign() << ", exec grade: " << form.getGradeToExecute());
}