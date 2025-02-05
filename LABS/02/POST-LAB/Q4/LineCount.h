#ifndef LINECOUNT_H
#define LINECOUNT_H

#include<string>

class LineCount{
public:
    LineCount(const std::string& filename);
    void countLines();
    int getLineCount() const;

private:
    std::string filename;
    int lineCount;
};

#endif
