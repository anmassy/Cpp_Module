/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:49:37 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/14 13:41:10 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

harl::harl(void) {
	
}

harl::~harl(void) {
	
}

void	harl::debug(void) {
	
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple \
	-pickle-special-ketchup burger. I really do !" << std::endl;
}

void	harl::info(void) {

	std::cout << "I cannot believe adding extra bacon costs more money. \
	You didn't put enough bacon in my burger ! If you did, I wouldn't be \
	asking for more !" << std::endl;
}

void	harl::warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free.\
	I've been coming for years whereas you started working here since \
	last month." << std::endl;
}

void	harl::error(void) {
	
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	harl::complain(std::string level) {
	t_fonc fonc[] = {&harl::debug, &harl::info, &harl::warning, &harl::error};
	std::string word[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;
	while (++i < 4) {
		if (!word[i].compare(level)) {
			(this->*fonc[i])();
			return ;
		}
	}
	std::cout << "incorrect argument" << std::endl;
}