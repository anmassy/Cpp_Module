/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:27:25 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/05 19:42:18 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public :
		Intern(void);
		Intern(const Intern &copy);
		~Intern(void);

		Intern &operator=(Intern const &rhs);

		Form*	makeForm( std::string name, std::string target );
	
};

#endif