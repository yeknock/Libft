CC = cc
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJECTS = $(SOURCE:.c=.o)
LIBNAME = libft.a


all: $(LIBNAME)
 
$(LIBNAME): $(OBJECTS)
	ar -rcs $(LIBNAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -rf $(LIBNAME)

re: fclean all

.PHONY: all clean fclean re $(LIBNAME)