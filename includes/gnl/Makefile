# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 11:47:55 by bahbibe           #+#    #+#              #
#    Updated: 2023/02/13 05:21:30 by bahbibe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl.a
FLAGS = -Wall -Wextra -Werror
SRCS =	get_next_line.c \
		get_next_line_bonus.c \
		get_next_line_utils.c \
		get_next_line_utils_bonus.c \
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)
	@:
$(NAME): $(OBJS)
%.o: %.c get_next_line.h
	@cc $(FLAGS) -c $< -o $@
	@ar -rcs $(NAME) $@
clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -rf $(NAME)
re: fclean all
.PHONY:all