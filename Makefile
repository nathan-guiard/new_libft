# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nguiard <nguiard@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/04 03:13:28 by nguiard           #+#    #+#              #
#    Updated: 2022/01/04 03:15:14 by nguiard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_isalpha.c 		\
	ft_itoa.c		\
	ft_calloc.c		\
	ft_putendl_fd.c		\
	ft_putchar_fd.c		\
	ft_putnbr_fd.c		\
	ft_putstr_fd.c		\
	ft_isascii.c		\
	ft_atoi.c		\
	ft_strmapi.c		\
	ft_striteri.c		\
	ft_isalnum.c		\
	ft_strlen.c		\
	ft_strjoin.c		\
	ft_strncmp.c		\
	ft_strdup.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strrchr.c		\
	ft_strchr.c		\
	ft_substr.c		\
	ft_strnstr.c		\
	ft_strlcat.c		\
	ft_memset.c		\
	ft_isdigit.c		\
	ft_split.c		\
	ft_isprint.c		\
	ft_strlcpy.c		\
	ft_bzero.c		\
	ft_memcpy.c		\
	ft_memmove.c		\
	ft_memchr.c		\
	ft_strtrim.c		\
	ft_memcmp.c		\
	ft_lstnew.c		\
	ft_lstadd_front.c	\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstadd_back.c	\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstiter.c		\
	ft_lstmap.c		\
	get_next_line.c		\
	get_next_line_utils.c	\
	ft_printf.c		\
	count_putchar.c		\
	count_puthex_maj.c	\
	count_puthex_min.c	\
	count_putnbr.c		\
	count_putprct.c		\
	count_putptr.c		\
	count_putstr.c		\
	count_putunsigned.c	\
	parsing.c		\


CFLAGS = -Wall -Werror -Wextra

OBJ = ${SRC:.c=.o}

NAME = libft.a

CC = gcc

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

clean:
	rm -f ${OBJ}

fclean:
	rm -f ${OBJ} ${NAME}

re: fclean all

.PHONY: all clean fclean re
