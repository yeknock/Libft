CC = cc
FLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_atoi.c ft_bzero.c ft_calloc.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c  ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_itoa.c ft_strjoin.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_substr.c ft_strtrim.c ft_split.c ft_striteri.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SOURCE = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJECTS = $(BONUS_SOURCE:.c=.o)
OBJECTS = $(SOURCE:.c=.o)
LIBNAME = libft.a


all: $(LIBNAME)

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	ar rcs $(LIBNAME) $(OBJECTS) $(BONUS_OBJECTS)

$(LIBNAME): $(OBJECTS)
	ar rcs $(LIBNAME) $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -f $(LIBNAME)

re: fclean all

.PHONY: all bonus clean fclean re $(LIBNAME)
