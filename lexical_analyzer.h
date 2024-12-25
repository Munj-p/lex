#ifndef LEXICAL_ANALYZER_H
#define LEXICAL_ANALYZER_H

#include <vector>
#include <string>
#include <fstream>

class LexicalAnalyzer
{
public:
    LexicalAnalyzer(const std::string &inputFile);
    void analyze();
    void writeTokensToFile(const std::string &outputFile);
    std::vector<std::string> getTokens() const; // Add this getter function
private:
    std::vector<std::string> tokens;
    std::ifstream inputFile;
};

#endif
