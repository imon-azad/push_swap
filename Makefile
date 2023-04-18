# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esamad-j <esamad-j@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 01:12:01 by esamad-j          #+#    #+#              #
#    Updated: 2023/04/19 01:20:55 by esamad-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS	= main.c ft_split.c ft_atoi.c min_max.c ra_rb_rr.c sa_sb_ss.c\
pa_pb.c rra_rrb_rrr.c operations_utils.c cheking.c order_3.c\
order_4-15.c algorithm_utils.c order_16+.c check_limits.c\

OBJS		= $(SRCS:%.c=%.o)

FLAGS		= -Wall -Werror -Wextra

CC 			= gcc

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re