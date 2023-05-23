# Compiler settings
CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Directory and file settings
SRC_DIR := .
BUILD_DIR := build
EXECUTABLE := program

# Find all .cpp and .hpp files in the directory
SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
HEADERS := $(wildcard $(SRC_DIR)/*.hpp)

# Generate object file names based on source file names
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SOURCES))

# Rule for building the executable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Rule for building object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp $(HEADERS)
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Phony target to clean the build directory and remove the program executable
.PHONY: clean
clean:
# if we wish to keep build directory and only remove the contents of the build directory we can change the line below to rm -rf $(BUILD_DIR)/*
	rm -rf $(BUILD_DIR)
	rm -f $(EXECUTABLE)
