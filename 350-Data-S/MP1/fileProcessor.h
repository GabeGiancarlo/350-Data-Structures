#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

#include <string>

class FileProcessor {
public:
    FileProcessor();
    ~FileProcessor();
    void processFile(const std::string &inputFile, const std::string &outputFile);
};

#endif // FILEPROCESSOR_H
