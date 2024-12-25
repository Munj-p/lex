#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

#include <string>

enum class TokenType
{
    KEYWORD,
    IDENTIFIER,
    OPERATOR,
    LITERAL,
    PUNCTUATION,
    INVALID
};

std::string tokenTypeToString(TokenType type)
{
    switch (type)
    {
    case TokenType::KEYWORD:
        return "KEYWORD";
    case TokenType::IDENTIFIER:
        return "IDENTIFIER";
    case TokenType::OPERATOR:
        return "OPERATOR";
    case TokenType::LITERAL:
        return "LITERAL";
    case TokenType::PUNCTUATION:
        return "PUNCTUATION";
    case TokenType::INVALID:
        return "INVALID";
    default:
        return "UNKNOWN";
    }
}

#endif
