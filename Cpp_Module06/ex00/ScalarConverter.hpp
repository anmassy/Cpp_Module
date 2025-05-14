/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:10:44 by marvin            #+#    #+#             */
/*   Updated: 2025/05/14 20:51:12 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cctype>
#include <cmath>
#include <cstdlib>

class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &copy);
    ~ScalarConverter();

    ScalarConverter &operator=(ScalarConverter const &rhs);

    void convert(const std::string& param);

private:
    static bool isChar(const std::string& param, char& outValue);
    static bool isInt(const std::string& param, int& outValue, bool& intOverflow);
    static bool isFloat(const std::string& param, float& outValue);
    static bool isDouble(const std::string& param, double& outValue);

    bool identifyType(const std::string& param, char& charValue, int& intValue, float& floatValue, double& doubleValue, bool& intOverflow);
    void displayResults(char charValue, int intValue, float floatValue, double doubleValue, bool intOverflow, bool isSpecial);
};

std::ostream& operator<<(std::ostream &o, const ScalarConverter &rhs);

#endif // SCALARCONVERTER_HPP

