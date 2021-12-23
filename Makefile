######################################################################
#                                NAME                                #
######################################################################

NAME = push_swap

######################################################################
#                              COMPILER                              #
######################################################################

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g3
# ruta .h
CFLAGS += -I $(INC_PATH) -I $(LFT_DIR)

DEV=0
ifeq ($(DEV), 1)
	CFLAGS += -fsanitize=address
endif

######################################################################
#                                PATHS                               #
######################################################################

INC_PATH = inc
SRC_PATH = src
OBJ_PATH = obj

######################################################################
#                                SRCS                                #
######################################################################

SRCS = main.c check_errors.c atoi_update.c start_sorting.c \
		push_swap_utils.c types_of_sorting.c rules_r.c \
		rules_sp.c show_stack.c

OBJS_NAME = $(SRCS:%.c=%.o)

OBJS = $(addprefix $(OBJ_PATH)/, $(OBJS_NAME))

######################################################################
#                                LIBS                                #
######################################################################

LFT_DIR = libft
# .a
LDFLAGS = -L $(LFT_DIR)
# lib name
LDLIBS = -lft

######################################################################
#                                RULES                               #
######################################################################

.PHONY: all fclean clean re

all: $(NAME)

$(NAME): $(OBJS)
	make -sC $(LFT_DIR)
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(LDLIBS)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH) 2> /dev/null

clean:
	make fclean -sC $(LFT_DIR)
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re:	fclean all
