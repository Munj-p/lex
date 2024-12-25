#ifndef TOKEN_H
#define TOKEN_H

#include <iostream>
#include <string>

class Token
{
public:
    std::string type;  // Type of token (keyword, operator, etc.)
    std::string value; // Value of the token (e.g., "if", "x", "5", "+", etc.)

    Token(const std::string &type, const std::string &value)
        : type(type), value(value) {}

    // Define the operator<< for Token class to print tokens
    friend std::ostream &operator<<(std::ostream &os, const Token &token)
    {
        os << "Type: " << token.type << ", Value: " << token.value;
        return os;
    }
};

#endif
