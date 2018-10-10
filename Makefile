# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-ren <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 10:03:21 by pvan-ren          #+#    #+#              #
#    Updated: 2018/09/06 15:49:54 by pvan-ren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary

NAME = filler

# Path

SRC_PATH = ./source/

OBJ_PATH = ./bin/

INC_PATH = ./includes/

# Name

SRC_NAME =	main.c			\
			get_map.c		\
			position.c		\
			get_token.c		\
			place_token.c	\
			check_token.c	\
			algo.c			\

OBJ_NAME = $(SRC_NAME:.c=.o)

# Files

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Flags

LDFLAGS = -L./libft/

LFT = -lft

CC = gcc $(CFLAGS)
#-fsanitize=address

CFLAGS = -Wall -Wextra -Werror

# Rules

all: $(NAME)

$(NAME): $(OBJ) $(INC_PATH)
	@make -C./libft/
	@echo "\033[34mCreating $(NAME) ...\033[0m"
	@$(CC) $(LDFLAGS) $(LFT) $(OBJ) -o $@
	@echo "\033[32m$(NAME) created\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -I$(INC_PATH) -o $@ -c $<

clean: cleanlib
	@echo "\033[33mRemoving $(NAME) .o files ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\033[0m"

cleanlib:
	@make clean -C ./libft/

fclean: clean fcleanlib
	@echo "\033[33mRemoving $(NAME)...\033[0m"
	@rm -f $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\033[0m"

fcleanlib:
	@make fclean -C ./libft/

re : fclean all

norme:
	norminette $(SRC)
	norminette $(INC_PATH)*.h

.PHONY : all clean fclean re
