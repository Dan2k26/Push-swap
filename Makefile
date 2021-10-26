NAME = push_swap

SRCS = ft_pushswap.c check_errors.c atoi_update.c start_sorting.c \
		push_swap_utils.c show_stack.c types_of_sorting.c rules_r.c \
		rules_sp.c
#Direccion de la Libft
FILE_DIR = libft

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address 

all: $(NAME)

$(NAME): $(OBJS)
#libft
	cd $(FILE_DIR) && $(MAKE) && $(MAKE) bonus
#push swap
	$(CC) $(CFLAGS) $(OBJS) $(FILE_DIR)/libft.a -o $(NAME)

%.o : %.c push_swap.h $(FILE_DIR)/libft.h
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	cd $(FILE_DIR) && $(MAKE) clean
	rm -f $(OBJS)

fclean: clean
	cd $(FILE_DIR) && $(MAKE) fclean
	rm -f $(NAME)

re:	fclean all

PHONY.: all fclean clean re
