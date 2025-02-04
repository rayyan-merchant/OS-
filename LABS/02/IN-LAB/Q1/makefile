CC = g++
CFLAGS = -Wall -Wextra -std=c++11
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
TARGET = main

SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES := $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o,$(SRC_FILES)

$(BIN_DIR)/$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

