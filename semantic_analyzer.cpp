#include "semantic_analyzer.h"
#include <iostream>

SemanticAnalyzer::SemanticAnalyzer(const std::vector<std::string> &tokens) : tokens(tokens) {}

void SemanticAnalyzer::analyze()
{
    for (size_t i = 0; i < tokens.size(); ++i)
    {
        if (tokens[i] == "int" && i + 1 < tokens.size())
        {
            declaredVariables.insert(tokens[i + 1]);
        }
        else if (tokens[i] == "=" && i + 1 < tokens.size() && declaredVariables.find(tokens[i - 1]) == declaredVariables.end())
        {
            semanticErrors.push_back("Semantic error: Variable '" + tokens[i - 1] + "' not declared.");
        }
    }
}

void SemanticAnalyzer::writeErrorsToFile(const std::string &outputFile)
{
    std::ofstream outFile(outputFile);
    if (!outFile)
    {
        std::cerr << "Error opening output file!" << std::endl;
        exit(1);
    }

    for (const auto &error : semanticErrors)
    {
        outFile << error << std::endl;
    }
}
