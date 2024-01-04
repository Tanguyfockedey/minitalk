# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/30 14:58:38 by tafocked          #+#    #+#              #
#    Updated: 2024/01/04 19:47:40 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_S	= server

NAME_C	= client

FILES_S	= source/server.c

FILES_C	= source/client.c

OBJ_S	= $(FILES_S:.c=.o)

OBJ_C	= $(FILES_C:.c=.o)

CC		= cc
CFLAGS	= -Wall -Wextra -Werror -fsanitize=address -g
LDLIBS	= libft/libft.a

all: $(NAME_S) $(NAME_C)

re: fclean all

$(NAME_S): $(OBJ_S)
	@ $(MAKE) -C libft
	$(CC) $(CFLAGS) $(LDLIBS) $(OBJ_S) -o $(NAME_S)

$(NAME_C): $(OBJ_C)
	@ $(MAKE) -C libft
	$(CC) $(CFLAGS) $(LDLIBS) $(OBJ_C) -o $(NAME_C)

clean:
	rm -f $(OBJ_S)
	rm -f $(OBJ_C)
	$(MAKE) clean -C libft

fclean: clean
	rm -f $(NAME_S)
	rm -f $(NAME_C)
	$(MAKE) fclean -C libft

.PHONY: all re clean fclean