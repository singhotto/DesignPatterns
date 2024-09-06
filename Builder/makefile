# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = main

# Source files
SRC = ./code/House.cpp \
      ./code/WoodHouseBuilder.cpp \
      ./code/LuxuryHouse.cpp \
      ./code/Director.cpp \
      ./main.cpp

# Object files (replace .cpp with .o)
OBJ = $(SRC:.cpp=.o)

# Rule to build the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJ) $(TARGET)
