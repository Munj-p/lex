#ifndef SYNTAX_ANALYZER_H
#define SYNTAX_ANALYZER_H

#include <string>
#include <vector>
#include <fstream>

class SyntaxAnalyzer
{
public:
    SyntaxAnalyzer(const std::vector<std::string> &tokens);
    void analyze();
    void writeErrorsToFile(const std::string &outputFile);

private:
    std::vector<std::string> tokens;
    std::vector<std::string> syntaxErrors;
};

#endif
