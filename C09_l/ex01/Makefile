#flags
CFLAGS := -Wall -Wextra -Werror
LIBFLAGS := rcs

#directories
SRC_DIR := srcs

#targets (source files, object files)
SOURCES := $(wildcard $(SRC_DIR)/*.c)
OBJECTS := ft_putchar.o ft_pustr.o ft_strcmp.o ft_strlen.o ft_swap.o
OBJECTS_FR := $(addprefix $(SRC_DIR)/, $(OBJECTS))
LIBRARY = libft.a

#common recipe
CLEAN := rm -f $(OBJECTS_FR)

#rules & recipes
all : $(LIBRARY)

$(LIBRARY) : $(OBJECTS_FR)
	ar $(LIBFLAGS) $@ $^

$(OBJECTS_FR) : $(SOURCES)
	cc -c $(CFLAGS) $< -o $@

.PHONY : clean fclean re

clean :
	$(CLEAN)

fclean :
	$(CLEAN) $(LIBRARY)

re :
	$(CLEAN) $(LIBRARY)
	make