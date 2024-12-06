/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:39 by anmassy           #+#    #+#             */
/*   Updated: 2024/12/06 11:03:11 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//attention manque quelque truc les gestion des cas impossible


#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <value>" << std::endl;
        return 1;
    }
    // Créer une instance de ScalarConverter
    ScalarConverter converter;

    converter.convert(argv[1]);

    return 0;
}

