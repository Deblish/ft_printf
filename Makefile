NAME = libftprintf.a

EXECUTABLE = test

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directory locations
INC_DIR = ./include
SRC_DIR = ./src

# Finding all .c files in src directory
SOURCES = $(wildcard $(SRC_DIR)/*.c)

# Converting .c filenames to .o
OBJECTS = $(SOURCES:.c=.o)

# Default target
all: $(NAME)

exe: $(EXECUTABLE)

# Creating the static library
$(NAME): $(OBJECTS)
	ar rcs $@ $^

# Pattern rule for object files
%.o: %.c
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

# Executable calls all of the mandatory objects
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)

# Cleaning up object files
clean:
	rm -f $(SRC_DIR)/*.o

# Cleaning everything that has been created
fclean: clean
	rm -f $(NAME)

# Re-make everything
re: fclean all

.PHONY: all clean fclean re

