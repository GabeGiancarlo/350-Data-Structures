#include "Translator.h"
#include <cctype> // For tolower function

Translator::Translator() {}

Translator::~Translator() {}

bool isConsonant(char ch) {
    ch = std::tolower(ch);
    return std::string("bcdfghjklmnpqrstvwxyz").find(ch) != std::string::npos;
}

std::string Translator::translateEnglishWord(const std::string &word) {
    std::string result;
    for (char ch : word) {
        if (isConsonant(ch)) {
            result += model.translateSingleConsonant(ch);
        } else {
            result += ch;
        }
    }
    return result;
}
