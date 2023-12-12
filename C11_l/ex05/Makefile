#flags
FLAGS := -Wall -Wextra -Werror
LIBFLAGS := rcs

#directories
SRC_DIR := ./src/
SRC_INCL := ./include/

#targets
SOURCES := $(wildcard $(SRC_DIR)*.c)
OBJECTS := $(SOURCES:.c=.o)
LIBRARY := libft.a
EXECUTABLE := do-op

#common rules
CLEAN := rm -f $(OBJECTS)
NORM := norminette -R

#rules & recipes
all : $(EXECUTABLE)

$(EXECUTABLE) : $(LIBRARY)
	cc -o $@ main.c -L. -lft

$(LIBRARY) : $(OBJECTS)
	ar $(LIBFLAGS) $@ $^

.c.o :
	cc -c -I$(SRC_INCL) $(FLAGS) $< -o $(<:.c=.o)

normc :
	$(NORM) CheckForbiddenSourceHeader $(SOURCES) main.c

normh :
	$(NORM) CheckDefine $(SRC_INCL)*.h

clean :
	$(CLEAN)

fclean :
	$(CLEAN) $(LIBRARY) $(EXECUTABLE)

re : fclean all

.PHONY : all clean fclean re