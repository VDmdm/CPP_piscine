# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/26 17:21:35 by jalvaro           #+#    #+#              #
#    Updated: 2020/08/10 18:01:42 by jalvaro          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialized

SRC = serialized.cpp main.cpp

OBJ = serialized.o main.o

HEADER = ./ft.hpp

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