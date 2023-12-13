# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperron <aperron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 16:15:56 by aperron           #+#    #+#              #
#    Updated: 2023/12/13 17:52:01 by aperron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= exe

SRCFOLDER	= src/
SRCS		= $(addprefix $(SRCFOLDER), main.c)

FLAGS		= -g -Wall -Wextra -Werror
MLX_FLAGS	= -Lmlx -lmlx -framework OpenGL -framework AppKit

CC			= gcc

RM			= rm -f
RM_DIR		= rm -drf

all: $(NAME) run

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

run:
	@./$(NAME)

clean:
	@$(RM_DIR) *.dSYM

fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re