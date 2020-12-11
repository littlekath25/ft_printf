# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: kfu <kfu@student.codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/14 23:09:58 by kfu           #+#    #+#                  #
#    Updated: 2020/12/11 14:45:29 by kfu           ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = 		libftprintf.a
LIBFT =		libft/libft.a
AR =		ar
H_FILES = 	src/ft_printf.h
CC = 		gcc
RM =		rm -f
CFLAGS = 	-Wall -Wextra -Werror
O_FILES = 	$(SRC:.c=.o)
SRC_PATH = 	src/
SRC = 		ft_printf.c ft_parse.c ft_printchar.c ft_printstr.c\
			ft_printaddress.c ft_printchar.c ft_printint.c ft_printuint.c\
			ft_printhex.c

all: $(NAME)

$(NAME): $(O_FILES)
	cp $(LIBFT) $(NAME) && $(AR) rcs $(NAME) $(O_FILES)

%.o: $(SRC_PATH)%.c $(H_FILES)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	$(RM) $(O_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
