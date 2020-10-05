# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/26 17:21:35 by jalvaro           #+#    #+#              #
#    Updated: 2020/07/29 13:18:15 by jalvaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.c

OBJ = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -Wall -Werror -Wextra $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ -Wall -Werror -Wextra -c  $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all