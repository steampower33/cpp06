#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter& ScalarConverter::operator = (const ScalarConverter& other) {
    if(this != &other) {}
    return *this;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	*this = other;
}

ScalarConverter:: ~ ScalarConverter() {}

void ScalarConverter::convert(const std::string& input) {
	char* endptr;
    double value;
	
	value = strtod(input.c_str(), &endptr);

	// Char
	std::cout << "char: ";
	if (std::isnan(value) || std::isinf(value))
		std::cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<char>(value)))
		std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
	else
		std::cout << "Non displayalbe" << std::endl;

	// Int
	std::cout << "int: ";
	if (std::isnan(value) || std::isinf(value))
		std::cout << "impossible" << std::endl;
	else if (-2147483648 <= value && value <= 2147483647)
		std::cout << static_cast<int>(value) << std::endl;
	else
		std::cout << "impossible" << std::endl;

	// Float
	std::cout << "float: ";
	if (std::isnan(value) || std::isinf(value))
		std::cout << std::showpos << static_cast<float>(value) << "f" << std::noshowpos << std::endl;
	else if (static_cast<float>(value) == static_cast<int64_t>(static_cast<float>(value)))
		std::cout << static_cast<float>(value) << ".0f" << std::endl;
	else
		std::cout << std::setprecision(9) << static_cast<float>(value) << "f" << std::endl;

	// Double
	std::cout << "double: ";
	if (std::isnan(value) || std::isinf(value))
		std::cout << std::showpos << static_cast<double>(value) << std::noshowpos << std::endl;
	else if (static_cast<double>(value) == static_cast<int64_t>(static_cast<double>(value)))
		std::cout << static_cast<double>(value) << ".0" << std::endl;
	else
		std::cout << std::setprecision(17) << static_cast<double>(value) << std::endl;
}
