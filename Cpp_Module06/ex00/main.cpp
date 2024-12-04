/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:04:39 by anmassy           #+#    #+#             */
/*   Updated: 2024/10/09 17:46:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//attention manque quelque truc les gestion des cas impossible


#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    // Vérifier que l'utilisateur a fourni un argument
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <value>" << std::endl;
        return 1;
    }
	// std::cout << "salut" << std::endl;
    // Créer une instance de ScalarConverter
    ScalarConverter converter;

    // Convertir la valeur fournie par l'utilisateur
    converter.convert(argv[1]);

    return 0;
}

