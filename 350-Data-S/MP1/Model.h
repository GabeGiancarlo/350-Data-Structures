#ifndef MODEL_H
#define MODEL_H

#include <string>

class Model {
public:
    Model();
    ~Model();
    std::string translateSingleConsonant(char consonant);
    std::string translateSingleVowel(char vowel);
};

#endif // MODEL_H
