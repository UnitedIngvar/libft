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

SRC_DIR		= src

INCLUDES	= includes/

SRCS		= $(shell find $(SRC_DIR) -name '*.c')

OBJS		= ${patsubst %.c,%.o,${SRCS}}

%.o:		%.c
			${CC} ${CFLAGS} -c $< -o $@ -I${INCLUDES} -MD

all:		$(NAME)

$(NAME):	$(OBJS) Makefile
			ar rc $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY:		all, clean, fclean, re, bonus
