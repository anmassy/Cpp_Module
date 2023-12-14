/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:12:20 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/14 13:14:00 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main(int ac, char **av) {

	if (ac != 2) {
		std::cout << "incorrect number of arguments" << std::endl;
		return (0);
	}
	harl sign;
	sign.complain(av[1]);
	return (0);
}	