# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 17:18:53 by tafocked          #+#    #+#              #
#    Updated: 2024/01/04 19:39:24 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FILES	= $(CHARACTER) $(CONVERSION) $(GNL) $(LIST) $(MEMORY) $(PRINTF) \
			$(STRING) $(WRITE)

CHARACTER	= character/ft_isalnum.c \
			character/ft_isalpha.c \
			character/ft_isascii.c \
			character/ft_isdigit.c \
			character/ft_isprint.c \
			character/ft_isspace.c \
			character/ft_tolower.c \
			character/ft_toupper.c \

CONVERSION	= conversion/ft_atof.c \
			conversion/ft_atoi.c \
			conversion/ft_itoa.c \

GNL		=	get_next_line/get_next_line_bonus.c \
			get_next_line/get_next_line_utils_bonus.c \

LIST	=	list/ft_lstadd_back.c \
			list/ft_lstadd_front.c \
			list/ft_lstclear.c \
			list/ft_lstdelone.c \
			list/ft_lstiter.c \
			list/ft_lstlast.c \
			list/ft_lstmap.c \
			list/ft_lstnew.c \
			list/ft_lstsize.c \

MEMORY	=	memory/ft_bzero.c \
			memory/ft_calloc.c \
			memory/ft_memchr.c \
			memory/ft_memcmp.c \
			memory/ft_memcpy.c \
			memory/ft_memmove.c \
			memory/ft_memset.c \

PRINTF	=	printf/ft_printf.c \
			printf/ft_putunbr_base.c \
			printf/ft_spec_char.c \
			printf/ft_spec_decimal.c \
			printf/ft_spec_hexalower.c \
			printf/ft_spec_hexaupper.c \
			printf/ft_spec_pointer.c \
			printf/ft_spec_string.c \
			printf/ft_spec_unsigned.c \

STRING	=	string/ft_split.c \
			string/ft_str_isint.c \
			string/ft_strchr.c \
			string/ft_strdup.c \
			string/ft_striteri.c \
			string/ft_strjoin.c \
			string/ft_strlcat.c \
			string/ft_strlcpy.c \
			string/ft_strlen.c \
			string/ft_strmapi.c \
			string/ft_strncmp.c \
			string/ft_strnstr.c \
			string/ft_strrchr.c \
			string/ft_strtrim.c \
			string/ft_substr.c \

WRITE	=	write/ft_putchar_fd.c \
			write/ft_putendl_fd.c \
			write/ft_putnbr_fd.c \
			write/ft_putstr_fd.c \

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
OBJ		= $(FILES:.c=.o)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

re: fclean all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
