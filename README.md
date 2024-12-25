# LEXnSYN
 
🚀 Features
Lexical Analysis

Breaks down the input source code into meaningful tokens like identifiers, keywords, operators, and more.
Outputs a token file (output_tokens.txt) for easy debugging and inspection.

Syntax Analysis
Checks if the sequence of tokens conforms to the rules of the programming language's grammar.
Logs syntax errors in the output_syntax_errors.txt file.

Semantic Analysis
Validates semantic rules, such as type compatibility and undeclared variable usage.
Reports semantic errors in output_semantic_errors.txt.

📂Project Structure
main.cpp: The entry point that orchestrates lexical, syntax, and semantic analysis.
lexical_analyzer.h / lexical_analyzer.cpp: Handles tokenization of the input code.
syntax_analyzer.h / syntax_analyzer.cpp: Implements grammar checks for the source code.
semantic_analyzer.h / semantic_analyzer.cpp: Ensures semantic rules are followed in the code.
