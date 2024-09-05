# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall -Wextra -I.

# Source files
SRCS = main.cpp \
       Application.cpp \
       ApplicationConfig.cpp \
       MacButton.cpp \
       MacCheckbox.cpp \
       MacFactory.cpp \
       WinButton.cpp \
       WinCheckbox.cpp \
       WinFactory.cpp

# Header files
HDRS = Application.hh \
       Button.hh \
       Checkbox.hh \
       GuiFactory.hh \
       MacCheckbox.hh \
       MacFactory.hh \
       WinCheckbox.hh \
       WinFactory.hh

# Object files
OBJS = $(SRCS:.cpp=.o)

# Output executable
TARGET = app

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Compiling
%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
