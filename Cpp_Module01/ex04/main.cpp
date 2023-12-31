/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:09:22 by anmassy           #+#    #+#             */
/*   Updated: 2023/12/14 12:36:41 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "replace.hpp"

int main(int ac, char **av) {

	replace fd;
	std::string file;
	std::string from = av[2];
	std::string to = av[3];
	if (ac != 4) {
		std::cout << "incorrect number of arguments" << std::endl;
		return (0);
	}
	
	std::ifstream ifs(av[1]);
	if (!ifs.is_open()) {
		std::cout << "Error opening file." << std::endl;
		return (1);
    }
	std::getline(ifs, file, '\0');
	ifs.close();
	file = fd.copy_paste(file, from, to);
	std::string temp = std::string(av[1]) + ".replace";
	std::ofstream ofs(temp.c_str());
	if (!ofs.is_open()) {
		std::cout << "Error opening file." << std::endl;
		return (1);
    }
	ofs << file;
	ofs.close();
	return (0);
}