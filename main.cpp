#include <iostream>
#include "lexical_analyzer.h"
#include "syntax_analyzer.h"
#include "semantic_analyzer.h"

int main()
{
    // Specify input and output files
    std::string inputFile = "input.txt";
    std::string tokenFile = "output_tokens.txt";
    std::string syntaxErrorFile = "output_syntax_errors.txt";
    std::string semanticErrorFile = "output_semantic_errors.txt";

    // Perform lexical analysis
    LexicalAnalyzer lexicalAnalyzer(inputFile);
    lexicalAnalyzer.analyze();
    lexicalAnalyzer.writeTokensToFile(tokenFile);

    // Perform syntax analysis
    SyntaxAnalyzer syntaxAnalyzer(lexicalAnalyzer.getTokens());
    syntaxAnalyzer.analyze();
    syntaxAnalyzer.writeErrorsToFile(syntaxErrorFile);

    // Perform semantic analysis
    SemanticAnalyzer semanticAnalyzer(lexicalAnalyzer.getTokens());
    semanticAnalyzer.analyze();
    semanticAnalyzer.writeErrorsToFile(semanticErrorFile);

    std::cout << "Analysis complete. Check output files." << std::endl;

    return 0;
}
