# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkrusta <gkrusta@student.42malaga.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 16:20:08 by gkrusta           #+#    #+#              #
#    Updated: 2023/04/28 13:17:55 by gkrusta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB = ar rcs

SRCS = ft_bzero.c  ft_isalnum.c ft_memcpy.c \
	  ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_memset.c  ft_strlen.c \
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c \
	  ft_strnstr.c ft_atoi.c    ft_calloc.c \
	  ft_strdup.c  ft_memcmp.c  ft_substr.c \
	  ft_strjoin.c ft_strtrim.c ft_split.c \
	  ft_itoa.c    ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c           ft_putstr_fd.c
	  

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re