NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra -g
SRC = push_swap.c stack_utils.c parsing_utils.c op_swap.c op_reverse_rotate.c \
	op_rotate.c op_push.c sort_five.c sort_three.c sort_radix.c
OBJ = $(patsubst %.c, %.o, $(SRC))

all: lib $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) libft.a -o $(NAME)

lib:
	make -C ./libft/
	mv ./libft/libft.a ./

clean:
	make -C ./libft/ clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f libft.a

re: fclean all