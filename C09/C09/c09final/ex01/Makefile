# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdouieb <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 17:58:13 by gdouieb           #+#    #+#              #
#    Updated: 2022/03/30 23:28:07 by gdouieb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	srcs/ft_putchar.c \
			srcs/ft_swap.c \
			srcs/ft_putstr.c \
			srcs/ft_strlen.c \
			srcs/ft_strcmp.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

INC		= includes

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror -I ${INC} 

.c.o:
		${CC} ${CFLAGS}  -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all :		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean re fclean
