# Compiler and flags
CC = gcc
CFLAGS = -Iinclude -Wall -Wextra

# Project name
TARGET = App

# Automatically find all .c files in src directory
SOURCES = $(wildcard src/*.c)

# Generate object files from source files
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(TARGET)

# Link object files into final executable
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(TARGET) $(OBJECTS)

# Phony targets (not actual files)
.PHONY: all clean
