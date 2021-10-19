# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnaji <bnaji@student.42abudhabi.ae>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 10:37:06 by bnaji             #+#    #+#              #
#    Updated: 2021/06/09 10:37:11 by bnaji            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
CFLAGS	= -I includes -Wall -Wextra -Werror
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= libft.a


%c:%o
	${CC} ${CFLAGS} -c

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
re: fclean all


.PHONY: all clean fclean re .c.o
