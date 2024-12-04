/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:10:29 by marvin            #+#    #+#             */
/*   Updated: 2024/10/09 13:29:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Méthode pour effectuer la conversion
void ScalarConverter::convert(const std::string& param) {
	char charValue;
	int intValue = 0;
	float floatValue = 0.0f;
	double doubleValue = 0.0;
	
	// Identifier le type et stock les valeurs
	if (!identifyType(param, charValue, intValue, floatValue, doubleValue)) {
		std::cout << "Input is not a valid type." << std::endl;
		return; // Sortir si l'entrée n'est pas valide
	}
	// Afficher les résultats
	displayResults(charValue, intValue, floatValue, doubleValue);
}

// Identifier le type de la chaîne et stocker les valeurs
bool ScalarConverter::identifyType(const std::string& param, char& charValue, int& intValue, float& floatValue, double& doubleValue) {
	if (isChar(param, charValue)) {
		intValue = static_cast<int>(charValue);
		floatValue = static_cast<float>(charValue);
		doubleValue = static_cast<double>(charValue);
		return true;
	}
	else if (isInt(param, intValue)) {
		charValue = static_cast<char>(intValue);
		floatValue = static_cast<float>(intValue);
		doubleValue = static_cast<double>(intValue);
		return true;
	}
	else if (isFloat(param, floatValue)) {
		intValue = static_cast<int>(floatValue);
		charValue = static_cast<char>(floatValue);
		doubleValue = static_cast<double>(floatValue);
		return true;
	}
	else if (isDouble(param, doubleValue)) {
		intValue = static_cast<int>(doubleValue);
		charValue = static_cast<char>(doubleValue);
		floatValue = static_cast<float>(doubleValue);
		return true;
	}
	return false; // Aucun type valide détecté
}

// Vérification si la chaîne représente un caractère valide
bool ScalarConverter::isChar(const std::string& param, char& outValue) {
	// Cas où la chaîne a une longueur de 1 et que c'est un char
	if (param.length() == 1 && !std::isdigit(param[0])) {
		outValue = param[0];
		return true;
	}
	return false;  // Ce n'est pas un char valide
}

// Vérification si la chaîne représente un entier valide
bool ScalarConverter::isInt(const std::string& param, int& outValue) {
	size_t i = 0;
	// Vérifier si le premier caractère est un signe '+' ou '-', on l'ignore
	if (param[0] == '+' || param[0] == '-') {
		i = 1;  // Incrémenter pour ignorer le signe
	}
	// Vérifier que tous les caractères restants sont des chiffres
	while (i < param.length()) {
		if (!std::isdigit(param[i])) {
			return false; // Ce n'est pas un int valide
		}
		i++;
	}
	long longValue = std::stoll(param); // Convertir en long long pour avoir plus de place
	// Vérifier si la valeur est dans les limites de int
	if (longValue < std::numeric_limits<int>::min() || longValue > std::numeric_limits<int>::max()) {
		return false;  // La valeur dépasse les limites d'un int
	}
	// Si tout est bon, on affecte la valeur convertie à `outValue`
	outValue = static_cast<int>(longValue);
	return true; // Conversion réussie
}

bool ScalarConverter::isFloat(const std::string& param, float& outValue) {
	if (param == "+inf" || param == "-inf" || param == "nanf") {
		outValue = std::atof(param.c_str());  // Cas spéciaux pour les floats
		return true;
	}

	size_t i = 0;
	bool hasDecimalPoint = false;
	bool hasDigits = false;

	// Ignorer le signe au début
	if (param[i] == '+' || param[i] == '-') {
		i++;
	}
	// Parcourir chaque caractère
	while (i < param.length()) {
		char c = param[i];

		// Vérifier si c'est un chiffre
		if (std::isdigit(c)) {
			hasDigits = true;
		}
		// Vérifier le point décimal
		else if (c == '.' && !hasDecimalPoint) {
			hasDecimalPoint = true;
		}
		// Vérifier la présence de 'f' à la fin
		else if (c == 'f' && i == param.length() - 1) {
			break;  // Fin valide pour un float
		}
		// Si on rencontre un caractère non valide
		else {
			return false;
		}
		i++;
	}
	// S'assurer qu'il y a au moins un chiffre
	if (!hasDigits) {
		return false;
	}
	// Conversion en float
	outValue = std::atof(param.c_str());;  // Conversion sûre maintenant que la chaîne est validée
	return true;
}

bool ScalarConverter::isDouble(const std::string& param, double& outValue) {
	if (param == "+inf" || param == "-inf" || param == "nan") {
		outValue = std::atof(param.c_str());
		return true;
	}

	size_t i = 0;
	bool hasDecimalPoint = false;
	bool hasDigits = false;

	if (param[i] == '+' || param[i] == '-') {
		i++;
	}
	while (i < param.length()) {
		char c = param[i];
		if (std::isdigit(c)) {
			hasDigits = true;
		}
		else if (c == '.' && !hasDecimalPoint) {
			hasDecimalPoint = true;
		}
		else {
			return false;
		}
		i++;
	}
	if (!hasDigits) {
		return false;
	}
	outValue = std::atof(param.c_str());
	return true;
}

// Méthode pour afficher les résultats
void ScalarConverter::displayResults(char charValue, int intValue, float floatValue, double doubleValue) {
	// Vérification de l'affichage du caractère 
	if (std::isprint(charValue)) {
		std::cout << "char: '" << charValue << "'" << std::endl;
	}
	else {
		std::cout << "char: Non displayable" << std::endl;
	}
	if (intValue == std::numeric_limits<int>::max() || intValue == std::numeric_limits<int>::min()) {
        std::cout << "int: impossible" << std::endl;
    }
	else {
        std::cout << "int: " << intValue << std::endl;
    }
	if (floatValue >= std::numeric_limits<int>::max() || intValue <= std::numeric_limits<int>::min()) {
			std::cout << "float: " << floatValue << "f" << std::endl;
	}
	else {
		std::cout << "float: " << floatValue << ".0f" << std::endl;
	}
	if (doubleValue >= std::numeric_limits<int>::max() || doubleValue <= std::numeric_limits<int>::min() || doubleValue != doubleValue) { // Condition pour NaN {
			std::cout << "double: " << doubleValue << std::endl;
	}
	else {
		std::cout << "double: " << doubleValue << ".0" << std::endl;
	}
}
