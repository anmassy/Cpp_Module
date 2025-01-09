/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:02:25 by anmassy           #+#    #+#             */
/*   Updated: 2025/01/09 05:47:29 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
		
		std::string	GetTarget(void) const;
		void		execute(Bureaucrat const & executor) const;

	private:
		std::string _target;

};

std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form);

#endif	