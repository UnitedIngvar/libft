# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcrakeha <hcrakeha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/04 17:50:25 by hcrakeha          #+#    #+#              #
#    Updated: 2021/05/06 19:20:13 by hcrakeha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CFLAGS		= -Wall -Wextra -Werror

CC			= gcc -g

FILES		= ./ft_strlen.c ./ft_memset.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c \
			./ft_isprint.c ./ft_memcpy.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c \
			./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_strchr.c ./ft_strmapi.c ./ft_strncmp.c \
			./ft_tolower.c ./ft_toupper.c ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c \
			./ft_itoa.c ./ft_memmove.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_strdup.c \
			./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strnstr.c ./ft_strrchr.c \
			./ft_strtrim.c ./ft_substr.c ./ft_split.c

BONUS		= ./ft_lstsize.c ./ft_lstlast.c ./ft_lstdelone.c ./ft_lstiter.c ./ft_lstadd_front.c \
			./ft_lstclear.c ./ft_lstnew.c ./ft_lstadd_back.c ./ft_lstmap.c

OBJ			= $(FILES:.c=.o)

BOBJ		= $(BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

bonus:		$(NAME) $(BOBJ)
			ar rc $(NAME) $(BOBJ)

clean:
			rm -f $(OBJ) $(BOBJ)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY:		all, clean, fclean, re, bonus
