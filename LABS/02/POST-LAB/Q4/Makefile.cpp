CXX = g++

CXXFLAGS = -std=c++11 -Wall

TARGET = count_text

SRC = main.cpp LetterCount.cpp WordCount.cpp LineCount.cpp

OBJ = $(SRC:.cpp=.o)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)
 