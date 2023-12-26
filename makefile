CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SRC_DIR = projects
BUILD_DIR = build

# Get all .c files in the projects directory
SRC = $(wildcard $(SRC_DIR)/*.c)

# Create a list of corresponding executables in the build directory
EXECUTABLES = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%, $(SRC))

# Default target to build all executables
all: $(EXECUTABLES)
	@echo "Build completed successfully."

# Rule to build executables
$(BUILD_DIR)/%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< -o $@

# Phony target to clean build artifacts
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)/*

# Phony target to run the executables (replace "executable_name" with your actual executable names)
.PHONY: run
run: check_directories check_source_files check_executables all
	@echo "Running executables..."
	$(foreach exec, $(EXECUTABLES), ./$(exec);)
	@echo "Executables run completed."

# Check if required directories exist
.PHONY: check_directories
check_directories:
	@test -d $(SRC_DIR) || (echo "Error: $(SRC_DIR) directory does not exist." && exit 1)
	@test -d $(BUILD_DIR) || (echo "Error: $(BUILD_DIR) directory does not exist." && exit 1)

# Check if source files exist
.PHONY: check_source_files
check_source_files:
	@test -n "$(SRC)" || (echo "Error: No .c files found in $(SRC_DIR) directory." && exit 1)

# Check if executables are up to date
.PHONY: check_executables
check_executables: all
	@test -z "$(shell find $(BUILD_DIR) -name '*.c' -newer $(EXECUTABLES) 2>/dev/null)" || (echo "Info: All executables are up to date." && exit 1)

