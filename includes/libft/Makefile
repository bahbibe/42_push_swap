# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 05:53:25 by bahbibe           #+#    #+#              #
#    Updated: 2023/02/13 05:18:43 by bahbibe          ###   ########.fr        #
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

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_atoi.c\
		ft_bzero.c\
		ft_error.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_is_space.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_strjoin.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_strtrim.c\
		ft_striteri.c\
		ft_strmapi.c\
		ft_itoa.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_split.c\
		ft_lstnew_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c\
		ft_empty_str.c\
		ft_arr_free.c\
		ft_swap.c\
		ft_sort_arr.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)
	@:

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

%.o: %.c
	@gcc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re