CFLAGS = -Wall -Wextra -Werror
SRCS = main.c set_struct.c push.c swap.c rotate.c reverse_rotate.c control.c radix.c buble.c little_sort.c ft_atol.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = cc
LIB = ./libft/libft.a

all: $(NAME)

$(NAME) : $(LIB) $(OBJS)
	$(CC) $(OBJS) -g $(LIB) -o $(NAME)

$(LIB) :
	@make -C ./libft

.c.o:
	$(CC) $(CFLAGSS) -c $< -o $@ -g

clean:
	rm -rf $(OBJS)
	make clean -C ./libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C ./libft

re: clean all

.PHONY: clean re fclean all
