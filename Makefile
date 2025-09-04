NAME	:=	libft.a
CC	:=	cc
CFLAGS	:=	-Wall -Wextra -Werror
AR	:=	ar rcs
SRC	:=	ft_isalpha.c
OBJ	:= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re