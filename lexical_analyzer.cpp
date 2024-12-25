#include "lexical_analyzer.h"
#include <sstream>
#include <iostream>

LexicalAnalyzer::LexicalAnalyzer(const std::string &inputFileName)
{
    inputFile.open(inputFileName);
    if (!inputFile)
    {
        std::cerr << "Error opening input file!" << std::endl;
        exit(1);
    }
}

void LexicalAnalyzer::analyze()
{
    std::string line;
    while (getline(inputFile, line))
    {
        std::istringstream stream(line);
        std::string token;
        while (stream >> token)
        {
            tokens.push_back(token); // Simple tokenization
        }
    }
}

void LexicalAnalyzer::writeTokensToFile(const std::string &outputFile)
{
    std::ofstream outFile(outputFile);
    if (!outFile)
    {
        std::cerr << "Error opening output file!" << std::endl;
        exit(1);
    }

    for (const auto &token : tokens)
    {
        outFile << token << std::endl;
    }
}

std::vector<std::string> LexicalAnalyzer::getTokens() const
{
    return tokens; // Return the list of tokens
}
