#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgay <cgay@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/04/29 00:16:44 by cgay              #+#    #+#              #
#    Updated: 2015/04/29 00:16:44 by cgay             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = 	ft_strcat.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_tabcpy.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memcmp.c ft_memcpy.c \
		ft_memset.c ft_putchar.c ft_putstr.c ft_strchr.c ft_strcmp.c \
		ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c \
		ft_strncpy.c ft_puttab.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c \
		ft_memchr.c ft_itoa.c ft_memalloc.c ft_memdel.c ft_putchar.c ft_putchar_fd.c \
		ft_putendl.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_realloc.c ft_strclr.c ft_strdel.c ft_strequ.c ft_striter.c ft_striteri.c \
		ft_strjoin.c ft_strmap.c ft_strmapi.c ft_strnew.c ft_strsplit.c ft_strsub.c \
		ft_strtrim.c ft_strnequ.c ft_putnbr.c ft_memmove.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
