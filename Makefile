CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = ft_isalpha.c ft_isdigit.c ft_isalnum.c

LIBNAME = libft.a

all: $(LIBNAME)


$(LIBNAME): $(OBJECTS) libft.h
	$(CC) $(FLAGS) $(OBJECTS) -o all

$(OBJECTS): $(NAME)
	$(CC) $(FLAGS) -c $(NAME)

clear:
	rm $(OBJECTS) all