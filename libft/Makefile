CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
INCLUDES = libft.h get_next_line.h
NAME = libft.a
SOURCES = ft_split.c   ft_strjoin.c  ft_strncmp.c ft_strnstr.c ft_strtrim.c\
ft_strdup.c  ft_strlen.c ft_substr.c ft_memcpy.c ft_atoi.c ft_itoa.c ft_isdigit.c ft_memset.c

OBJECTS = $(SOURCES:.c=.o)
BONUSOBJECTS = $(BONUS:.c=.o)

#all targets which aren't files
.phony: all clean fclean re bonus

# -c create silently
# -r replace or add and creates if there's no archive
# -s writes / updates object-file index
# $@ = target's name
# ‘$<’ is the first prerequisite <-- doesn't work with the test 
$(NAME): $(OBJECTS)
	ar -crs $@ $(OBJECTS)

bonus: $(NAME) $(BONUSOBJECTS)
	ar -crs $(NAME) $(BONUSOBJECTS)

all: $(NAME) bonus

# -f --> force remove
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
