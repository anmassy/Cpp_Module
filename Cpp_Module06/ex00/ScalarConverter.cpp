/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:10:29 by marvin            #+#    #+#             */
/*   Updated: 2025/05/14 20:58:31 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	// std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	// std::cout << "ScalarConverter Copy Constructor called" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter() {
	// std::cout << "ScalarConverter Deconstructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &rhs) {
	(void)rhs;
	return *this;
}

void ScalarConverter::convert(const std::string& param) {
	char charValue = 0;
	int intValue = 0;
	float floatValue = 0.0f;
	double doubleValue = 0.0;
	bool intOverflow = false;
	bool isSpecial = false;

	if (param == "nan" || param == "nanf" || param == "+inf" || param == "+inff" || param == "-inf" || param == "-inff") {
		isSpecial = true;
		floatValue = std::strtof(param.c_str(), nullptr);
		doubleValue = static_cast<double>(floatValue);
		displayResults(0, 0, floatValue, doubleValue, true, true);
		return;
	}
	if (!identifyType(param, charValue, intValue, floatValue, doubleValue, intOverflow)) {
		std::cout << "Input is not a valid type." << std::endl;
		return;
	}
	displayResults(charValue, intValue, floatValue, doubleValue, intOverflow, isSpecial);
}

bool ScalarConverter::identifyType(const std::string& param, char& charValue, int& intValue, float& floatValue, double& doubleValue, bool& intOverflow) {
	if (isChar(param, charValue)) {
		intValue = static_cast<int>(charValue);
		floatValue = static_cast<float>(charValue);
		doubleValue = static_cast<double>(charValue);
		return true;
	}
	else if (isInt(param, intValue, intOverflow)) {
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
	return false;
}

bool ScalarConverter::isChar(const std::string& param, char& outValue) {
	if (param.length() == 1 && !std::isdigit(param[0])) {
		outValue = param[0];
		return true;
	}
	return false;
}

bool ScalarConverter::isInt(const std::string& param, int& outValue, bool& intOverflow) {
	if (param.empty())
		return false;

	int sign = 1;
	size_t i = 0;
	long long result = 0;

	if (param[0] == '+' || param[0] == '-') {
		if (param[0] == '-') sign = -1;
		i++;
	}
	if (i == param.length()) {
		return false;
	}
	while (i < param.length()) {
		if (!std::isdigit(param[i]))
			return false;
		int digit = param[i] - '0';
		result = result * 10 + digit;
		if ((sign == 1 && result > static_cast<long long>(std::numeric_limits<int>::max())) ||
			(sign == -1 && -result < static_cast<long long>(std::numeric_limits<int>::min()))) {
			intOverflow = true;
			return true;
		}
		i++;
	}
	outValue = static_cast<int>(sign * result);
	return true;
}


bool ScalarConverter::isFloat(const std::string& param, float& outValue) {
	char* endPtr = nullptr;
	outValue = std::strtof(param.c_str(), &endPtr);
	return endPtr != nullptr && *endPtr == 'f';
}

bool ScalarConverter::isDouble(const std::string& param, double& outValue) {
	char* endPtr = nullptr;
	outValue = std::strtod(param.c_str(), &endPtr);
	return endPtr != nullptr && *endPtr == '\0';
}

void ScalarConverter::displayResults(char charValue, int intValue, float floatValue, double doubleValue, bool intOverflow, bool isSpecial) {
	// CHAR
	if (isSpecial || intOverflow || doubleValue < 0 || doubleValue > 255 || std::isnan(doubleValue)) {
		std::cout << "char: impossible" << std::endl;
	}
	else if (!std::isprint(charValue)) {
		std::cout << "char: Non displayable" << std::endl;
	}
	else {
		std::cout << "char: '" << charValue << "'" << std::endl;
	}
	// INT
	if (isSpecial || intOverflow) {
		std::cout << "int: impossible" << std::endl;
	}
	else {
		std::cout << "int: " << intValue << std::endl;
	}
	// FLOAT
	std::cout << "float: " << floatValue;
	if (floatValue == static_cast<int>(floatValue) && !std::isinf(floatValue) && !std::isnan(floatValue))
		std::cout << ".0";
	std::cout << "f" << std::endl;
	// DOUBLE
	std::cout << "double: " << doubleValue;
	if (doubleValue == static_cast<int>(doubleValue) && !std::isinf(doubleValue) && !std::isnan(doubleValue))
		std::cout << ".0";
	std::cout << std::endl;
}

std::ostream& operator<<(std::ostream &o, const ScalarConverter &rhs) {
	o << "ScalarConverter object (no state)" << std::endl;
	return o;
}
