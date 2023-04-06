# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 01:53:38 by esamad-j          #+#    #+#              #
#    Updated: 2023/02/08 20:21:27 by esamad-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c\
ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c\
ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c\
ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\


BNS_SRCS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\
		
OBJS		= $(SRCS:%.c=%.o)

BNS_OBJS	= $(BNS_SRCS:%.c=%.o)

CFLAGS		= -Wall -Werror -Wextra

CC = gcc

ifdef WITH_BONUS
	TOTAL_OBJS = $(OBJS) $(BNS_OBJS)
else
	TOTAL_OBJS = $(OBJS)
endif

all: $(NAME)

$(NAME): $(TOTAL_OBJS)
	ar -rc $(NAME) $(TOTAL_OBJS)

bonus:
	make WITH_BONUS=1

clean:
	rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re