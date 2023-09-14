#include <iostream>
#include <regex>
#include <vector>
#include <string>

struct Token {
    std::string name;
    std::string value;
};

std::vector<Token> lexicalAnalyzer(const std::string& inputText) {
    std::vector<std::pair<std::string, std::string>> patterns = {
        {"Integer variable", "[i-nI-N][a-zA-Z0-9]*"},
        {"ShortInt Number", "(1-9)|(1-9)(0-9)|(1-9)(0-9)(0-9)|(1-9)(0-9)(0-9)(0-9)"},
        {"LongInt Number", "(1-9)(0-9)(0-9)(0-9)(0-9)+"},
        {"Invalid Input or Undefined", ".*"}
    };

    std::vector<Token> tokens;
    for (const auto& patternPair : patterns) {
        const std::string& tokenName = patternPair.first;
        const std::string& pattern = patternPair.second;
        std::regex regEx(pattern);

        if (std::regex_match(inputText, regEx)) {
            tokens.push_back({tokenName, inputText});
            break;
        }
    }

    return tokens;
}

int main() {
    freopen("/home/ashik/Documents/input.txt","r",stdin);
    std::string inputText;
    std::cout << "Enter input text: \n";
    std::cin >> inputText;

    std::vector<Token> tokens = lexicalAnalyzer(inputText);
    if (!tokens.empty()) {
        std::cout << "Tokens:\n";
        for (const Token& token : tokens) {
            std::cout << token.name << ": " << token.value << "\n";
        }
    } else {
        std::cout << "Invalid Input or Undefined\n";
    }

    return 0;
}
