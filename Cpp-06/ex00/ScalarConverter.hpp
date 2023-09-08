cpp
Copy code
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <ctype.h>
#include <cstdlib>

class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& object);
    ScalarConverter& operator=(const ScalarConverter& rhs);

public:
    ~ScalarConverter();
    static void convert(const std::string& str);
    static void toChar(const std::string& str);
    static void toInt(const std::string& str);
    static void toFloat(const std::string& str);
    static void toDouble(const std::string& str);
};

#endif