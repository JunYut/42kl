#flags
FLAGS := -Wall -Wextra -Werror
LIBFLAGS := rcs

#directories
SRC_DIR := ./src/

#sources & objects
SOURCES := $(wildcard $(SRC_DIR)*.c)
OBJECTS := $(SOURCES:.c=.o)
LIBRARY := libft.a
EXECUTABLE := main

#common rules
CLEAN := rm -f $(OBJECTS)

#target & rules
all : $(EXECUTABLE)

$(EXECUTABLE) : $(LIBRARY)
	cc -o $(EXECUTABLE) main.c -L. -lft

$(LIBRARY) : $(OBJECTS)
	ar $(LIBFLAGS) $@ $^
	ranlib $@

.c.o :
	cc -c -I. $(FLAGS) $< -o $(<:.c=.o)

clean :
	$(CLEAN)

fclean :
	$(CLEAN) $(LIBRARY) $(EXECUTABLE)

re : fclean all

.PHONY: all clean fclean re