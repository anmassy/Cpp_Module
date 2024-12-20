/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:10:44 by marvin            #+#    #+#             */
/*   Updated: 2024/12/06 11:31:13 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <string>
#include <iostream>
#include <limits>  // Pour std::numeric_limits
#include <cctype>  // Pour std::isdigit
#include <cmath> // Pour std::isnan et std::isinf

class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &copy);
	~ScalarConverter();

	ScalarConverter    &operator=(ScalarConverter const &rhs);
    
    void convert(const std::string& param);
    bool identifyType(const std::string& param, char& charValue, int& intValue, float& floatValue, double& doubleValue);

private:

    // Méthodes pour identifier les types
    static bool isChar(const std::string& param, char& outValue);
    static bool isInt(const std::string& param, int& outValue);
    static bool isFloat(const std::string& param, float& outValue);
    static bool isDouble(const std::string& param, double& outValue);

    void displayResults(char charValue, int intValue, float floatValue, double doubleValue);

};

std::ostream& operator<<(std::ostream &o, const ScalarConverter &rhs);

#endif // SCALARCONVERTER_HPP