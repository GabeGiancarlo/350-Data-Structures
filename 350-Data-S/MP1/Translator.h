#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "Model.h"
#include <string>

class Translator {
    Model model;
public:
    Translator();
    ~Translator();
    std::string translateEnglishWord(const std::string &word);
};

#endif // TRANSLATOR_H
