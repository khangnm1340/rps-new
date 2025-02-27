
# Compiler
CXX = g++ -std=c++23


# Source files and target executable
SRCS = rok-paper-scissor.cpp rps.cpp
#SRCS = test.cpp

TARGET = lia

# Default rule to build and run
all: $(TARGET)
	@./$(TARGET)

# Rule to compile
$(TARGET): $(SRCS)
	@$(CXX) $(SRCS) -o $(TARGET)

# Clean up generated files
clean:
	del $(TARGET)


