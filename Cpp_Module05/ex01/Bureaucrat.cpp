/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:08:34 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/05 10:07:57 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(50) {
	// std::cout << "default Bureaucrat constructor called" << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	// std::cout << "basic Bureaucrat constructor called" << std::endl;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	// std::cout << "Copy Bureaucrat constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "default Bureaucrat destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
	// std::cout << "Copy Bureaucrat assignment operator called" << std::endl;
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return (this->_name);
}

int Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too High Exception\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low Exception\n");
}

void    Bureaucrat::gradeIncrement(void) {
	// std::cout << "increment fontion called" << std::endl;
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade--;
}

void    Bureaucrat::gradeDecrement(void) {
	// std::cout << "decrement fontion called" << std::endl;
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade++;
}

void    Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException &e) {
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
