NAME = push_swap
SRCS = ft_pushswap.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

PHONY.: all fclean clean re
