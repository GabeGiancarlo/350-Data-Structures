#include "Model.h"

Model::Model() {}

Model::~Model() {}

std::string Model::translateSingleConsonant(char consonant) {
    return std::string(1, consonant) + "o" + consonant;
}

std::string Model::translateSingleVowel(char vowel) {
    return std::string(1, vowel);
}

