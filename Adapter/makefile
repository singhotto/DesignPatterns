# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -std=c++11

# Executable name
TARGET = main

# Source files
SRCS = main.cpp \
       code/XmlData.cpp \
       code/JsonData.cpp \
       code/Adapter.cpp

# Object files (same as source files but with .o extensions)
OBJS = $(SRCS:.cpp=.o)

# Header files (optional, just for dependency tracking)
DEPS = code/XmlData.hh \
       code/JsonData.hh \
       code/Adapter.hh

# Default target: build the executable
all: $(TARGET)

# Rule to link object files and create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
