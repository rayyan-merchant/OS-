#ifndef WORDCOUNT_H
#define WORDCOUNT_H

#include <string>

class WordCount{
public:
    WordCount(const std::string& filename);
    void countWords();
    int getWordCount() const;

private:
    std::string filename;
    int wordCount;
};

#endif
