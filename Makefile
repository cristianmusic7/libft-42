# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfranco <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 14:13:00 by cfranco           #+#    #+#              #
#    Updated: 2018/01/22 14:22:46 by cfranco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs
INC = includes
LIBC = $(SRC)/libc/ft_memset.c \
		$(SRC)/libc/ft_bzero.c \
		$(SRC)/libc/ft_memcpy.c \
		$(SRC)/libc/ft_memccpy.c \
		$(SRC)/libc/ft_memmove.c \
		$(SRC)/libc/ft_memchr.c \
		$(SRC)/libc/ft_memcmp.c \
		$(SRC)/libc/ft_strcat.c \
		$(SRC)/libc/ft_strcmp.c \
		$(SRC)/libc/ft_strcpy.c \
		$(SRC)/libc/ft_strdup.c \
		$(SRC)/libc/ft_strlen.c \
		$(SRC)/libc/ft_strlcat.c \
		$(SRC)/libc/ft_strncat.c \
		$(SRC)/libc/ft_strncmp.c \
		$(SRC)/libc/ft_strncpy.c \
		$(SRC)/libc/ft_strchr.c \
		$(SRC)/libc/ft_strrchr.c \
		$(SRC)/libc/ft_strstr.c \
		$(SRC)/libc/ft_strnstr.c \
		$(SRC)/libc/ft_atoi.c \
		$(SRC)/libc/ft_isalpha.c \
		$(SRC)/libc/ft_isdigit.c \
		$(SRC)/libc/ft_isalnum.c \
		$(SRC)/libc/ft_isascii.c \
		$(SRC)/libc/ft_isprint.c \
		$(SRC)/libc/ft_toupper.c \
		$(SRC)/libc/ft_tolower.c \

ADDITIONAL = $(SRC)/additional/ft_memalloc.c \
		$(SRC)/additional/ft_memdel.c \
		$(SRC)/additional/ft_strnew.c \
		$(SRC)/additional/ft_strdel.c \
		$(SRC)/additional/ft_strclr.c \
		$(SRC)/additional/ft_striter.c \
		$(SRC)/additional/ft_striteri.c \
		$(SRC)/additional/ft_strmap.c \
		$(SRC)/additional/ft_strmapi.c \
		$(SRC)/additional/ft_strequ.c \
		$(SRC)/additional/ft_strnequ.c \
		$(SRC)/additional/ft_strsub.c \
		$(SRC)/additional/ft_strjoin.c \
		$(SRC)/additional/ft_strtrim.c \
		$(SRC)/additional/ft_strsplit.c \
		$(SRC)/additional/ft_itoa.c \
		$(SRC)/additional/ft_putchar.c \
		$(SRC)/additional/ft_putstr.c \
		$(SRC)/additional/ft_putendl.c \
		$(SRC)/additional/ft_putnbr.c \
		$(SRC)/additional/ft_putchar_fd.c \
		$(SRC)/additional/ft_putstr_fd.c \
		$(SRC)/additional/ft_putendl_fd.c \
		$(SRC)/additional/ft_putnbr_fd.c 

LISTS = $(SRC)/lists/ft_lstnew.c \
		$(SRC)/lists/ft_lstdelone.c \
		$(SRC)/lists/ft_lstdel.c \
		$(SRC)/lists/ft_lstadd.c \
		$(SRC)/lists/ft_lstiter.c \
		$(SRC)/lists/ft_lstmap.c

OBJS = ft_*.o


all: $(NAME) 

$(NAME):
	gcc -c -Wall -Wextra -Werror -I$(INC) $(LIBC) $(ADDITIONAL) $(LISTS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all