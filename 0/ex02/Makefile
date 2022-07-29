# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/22 17:16:26 by armaxima          #+#    #+#              #
#    Updated: 2022/05/03 23:01:04 by armaxima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

SRC = tests.cpp \
	Account.cpp\

OBJ = $(SRC:.cpp=.o)

INC = Account.hpp

CPP = c++

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
