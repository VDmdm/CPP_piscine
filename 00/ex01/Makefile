# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/26 17:21:35 by jalvaro           #+#    #+#              #
#    Updated: 2020/08/05 14:07:33 by jalvaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook-3000

SRC = List.cpp main.cpp

OBJ = List.o main.o

HEADER = ./List.hpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -Wall -Werror -Wextra $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	clang++ -Wall -Werror -Wextra -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all