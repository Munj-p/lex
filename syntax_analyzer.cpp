#include "syntax_analyzer.h"
#include <iostream>

SyntaxAnalyzer::SyntaxAnalyzer(const std::vector<std::string> &tokens) : tokens(tokens) {}

void SyntaxAnalyzer::analyze()
{
    for (size_t i = 0; i < tokens.size(); ++i)
    {
        if (tokens[i] == "=" && (i == 0 || i == tokens.size() - 1 || tokens[i + 1] == ";"))
        {
            syntaxErrors.push_back("Syntax error at token: " + tokens[i]);
        }
    }
}

void SyntaxAnalyzer::writeErrorsToFile(const std::string &outputFile)
{
    std::ofstream outFile(outputFile);
    if (!outFile)
    {
        std::cerr << "Error opening output file!" << std::endl;
        exit(1);
    }

    for (const auto &error : syntaxErrors)
    {
        outFile << error << std::endl;
    }
}
