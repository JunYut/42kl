#flags
FLAGS := -Wall -Wextra -Werror
LIBFLAGS := rcs

#directories
SRC_DIR := ./src/

#targets
SOURCES := $(wildcard $(SRC_DIR)*.c)
OBJECTS := $(SOURCES:.c=.o)
LIBRARY := libft.a
EXECUTABLE := main

#common rules
CLEAN := rm -f $(OBJECTS)

#rules & recipes
all : $(EXECUTABLE)

$(EXECUTABLE) : $(LIBRARY)
	cc -o $@ main.c -L. -lft

$(LIBRARY) : $(OBJECTS)
	ar $(LIBFLAGS) $@ $^

.c.o :
	cc -c $(FLAGS) $< -o $(<:.c=.o)

clean :
	$(CLEAN)

fclean :
	$(CLEAN) $(LIBRARY) $(EXECUTABLE)

re : fclean all

.PHONY : all clean fclean re