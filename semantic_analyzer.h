#ifndef SEMANTIC_ANALYZER_H
#define SEMANTIC_ANALYZER_H

#include <string>
#include <vector>
#include <fstream>
#include <unordered_set>

class SemanticAnalyzer
{
public:
    SemanticAnalyzer(const std::vector<std::string> &tokens);
    void analyze();
    void writeErrorsToFile(const std::string &outputFile);

private:
    std::vector<std::string> tokens;
    std::unordered_set<std::string> declaredVariables;
    std::vector<std::string> semanticErrors;
};

#endif
