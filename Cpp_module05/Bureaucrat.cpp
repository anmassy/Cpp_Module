/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:08:34 by anmassy           #+#    #+#             */
/*   Updated: 2024/04/10 19:25:38 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(50) {
    std::cout << "default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
    std::cout << "basic constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "default destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
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

void    Bureaucrat::gradeIncrement(void) {
    if (this->_grade < 150)
        return ;
    this->_grade++;
}

void    Bureaucrat::gradeDecrement(void) {
    if (this->_grade > 1)
        return ;
    this->_grade--;
}