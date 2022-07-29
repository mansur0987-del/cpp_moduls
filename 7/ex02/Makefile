# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 22:55:01 by armaxima          #+#    #+#              #
#    Updated: 2022/06/02 16:29:30 by armaxima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

INC = Array.hpp

CPP = c++

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@ -I $(INC)

all: $(NAME)

$(NAME): $(OBJ) $(INC) $(SRC)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ) -I $(INC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
