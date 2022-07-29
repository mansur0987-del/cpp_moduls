# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 22:55:01 by armaxima          #+#    #+#              #
#    Updated: 2022/05/23 18:34:06 by armaxima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

SRC = main.cpp \
	ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	DiamondTrap.cpp


OBJ = $(SRC:.cpp=.o)

INC = ClapTrap.hpp \
	ScavTrap.hpp \
	FragTrap.hpp \
	DiamondTrap.hpp

CPP = c++

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -I. -std=c++98

%.o : %.c
	$(CPP) $(FLAGS) -c $< -o $@ -I $(INC)

all: $(NAME)

$(NAME): $(OBJ) $(INC) $(SRC)
	$(CPP) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
