#include "FileProcessor.h"
#include "Translator.h"
#include <fstream>
#include <iostream>

FileProcessor::FileProcessor() {}

FileProcessor::~FileProcessor() {}

void FileProcessor::processFile(const std::string &inputFile, const std::string &outputFile) {
    std::ifstream inFile(inputFile);
    std::ofstream outFile(outputFile);
    if (!inFile.is_open() || !outFile.is_open()) {
        std::cerr << "Error opening files!" << std::endl;
        return;
    }

    Translator translator;
    std::string line;
    while (std::getline(inFile, line)) {
        // Translate the line and write the original and translated lines to the HTML file
        outFile << "<b>" << line << "</b><br><i>" << translator.translateEnglishWord(line) << "</i><br>";
    }

    inFile.close();
    outFile.close();
}
