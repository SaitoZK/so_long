# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperron <aperron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 16:15:56 by aperron           #+#    #+#              #
#    Updated: 2023/12/14 17:59:07 by aperron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########################### VARIABLES ############################

NAME		= exe

SRC_FOLDER	= ./src/
MLX_FOLDER	= ./mlx/
LFT_FOLDER	= ./libft/

SRCS_NPF	= main.c 
SRCS		= $(addprefix $(SRC_FOLDER), $(SRCS_NPF))

FLAGS		= -g -Wall -Wextra -Werror
MLX_FLAGS	= -Lmlx -lmlx -framework OpenGL -framework AppKit

CC			= gcc

RM			= rm -f
RM_ALL		= rm -drf

TO_CLEAN	= *.dSYM *.o

########################## TARGETS ###############################

all: $(NAME) run

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -L$(LFT_FOLDER) -lft -o $(NAME)

run:
	@./$(NAME)

clean:
	@$(RM_ALL) $(TO_CLEAN)

fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: all run clean fclean re

###################################################################