#ifndef LETTERCOUNT_H
#define LETTERCOUNT_H

#include <string>

class LetterCount{
public:
    LetterCount(const std::string& filename);
    void countLetters();
    int getLetterCount() const;
    
private:
    std::string filename;
    int letterCount;
};

#endif
