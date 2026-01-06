# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hde-andr <hde-andr@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 13:17:36 by hde-andr          #+#    #+#              #
#    Updated: 2026/01/06 15:51:06 by hde-andr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = swappush.a

LIBFTNAME = libft.a
LIBFTDIR = ./libft

SRCS = linked_list_util.c input_check.c ./operations/push.c ./operations/r_rotate.c ./operations/rotate.c ./operations/swap.c util.c \
		sort.c sort_util.c push_swap.c init.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	cc -Wall -Wextra -Werror -I. -c $< -o  $@

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) $(NAME)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	@make clean -C $(LIBFTDIR)

fclean: clean
	rm -f $(NAME)
	@make fclean -C $(LIBFTDIR)

re: fclean all

£.PHONY: all clean fclean re
