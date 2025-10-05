# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmiguele <jmiguele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/03 10:06:26 by jmiguele          #+#    #+#              #
#    Updated: 2025/10/04 19:33:39 by jmiguele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = rcs
RM = rm -rf


SRCS =  ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_strlen.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_tolower.c \
        ft_toupper.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strnstr.c \
        ft_atoi.c \
        ft_calloc.c \
        ft_strdup.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_split.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_putchar_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_putstr_fd.c

SRCS_BONUS = ft_lstnew.c \

OBJS = $(SRCS:.c=.o)



all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compilando librería..."
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	@echo "Libreria creada: $(NAME)"

%.o: %.c
	@echo "Compilando"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up..."
	@$(RM) $(OBJS)

fclean: clean
	@echo "Eliminando libreria..."
	@$(RM) $(NAME)
	@echo "Libreria $(NAME) eliminada."

re: fclean all

.PHONY: all clean fclean re bonus
