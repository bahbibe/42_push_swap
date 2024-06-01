# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 16:22:35 by bahbibe           #+#    #+#              #
#    Updated: 2023/02/14 04:43:47 by bahbibe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Off		=\033[0m
Black	=\033[0;30m
Red		=\033[0;31m
Green	=\033[0;32m
Yellow	=\033[0;33m
Blue	=\033[0;34m
Purple	=\033[0;35m
Cyan	=\033[0;36m
White	=\033[0;37m

CC		=	cc
NAME	=	push_swap
B_NAME	=	checker
CFLAGS	=	-Wall -Wextra -Werror -fsanitize=address -g3

SRCS	=	push_swap.c \
			src/base_operations.c \
			src/operations.c \
			src/operations2.c \
			src/search.c \
			src/sort_few.c \
			src/sort.c \
			src/stack.c \
			src/utils.c \

B_SRCS	=	checker.c \
			bonus_src/base_operations.c \
			bonus_src/operations.c \
			bonus_src/operations2.c \
			bonus_src/search.c \
			bonus_src/sort_few.c \
			bonus_src/sort.c \
			bonus_src/stack.c \
			bonus_src/utils.c \

LIBS		=	libft gnl

INCLUDES	=	$(LIBS:%=includes/$*/%.a)


all: $(LIBS) $(NAME)
	@:

bonus: libs $(B_NAME)
	
$(B_NAME):$(B_SRCS)
	@$(CC) -I includes $(CFLAGS) $(B_SRCS) $(INCLUDES)  -o $(B_NAME)
	@echo "$(Green)Checker Compiled ✅$(Off)"
$(NAME): $(SRCS)
	@$(CC) -I includes $(CFLAGS) $(SRCS) $(INCLUDES)  -o $(NAME)
	@echo "$(Green)push_swap Compiled ✅$(Off)"
	
libs: $(LIBS)
$(LIBS):
	@make -s -C includes/$@
	@cp includes/$@/$@.a includes
clean:
	@make -s -C includes/libft clean
	@make -s -C includes/gnl clean
fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(B_NAME)
	@rm -rf $(INCLUDES)
re: fclean all
.PHONY: all
