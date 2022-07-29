# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 22:55:01 by armaxima          #+#    #+#              #
#    Updated: 2022/05/17 15:53:05 by armaxima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Human

SRC = main.cpp \
	HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp \

OBJ = $(SRC:.cpp=.o)

INC = HumanA.hpp \
	HumanB.hpp \
	Weapon.hpp \

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
