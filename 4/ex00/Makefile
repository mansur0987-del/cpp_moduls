# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 22:55:01 by armaxima          #+#    #+#              #
#    Updated: 2022/05/25 20:32:07 by armaxima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SRC = main.cpp \
	Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp


OBJ = $(SRC:.cpp=.o)

INC = Animal.hpp \
	Cat.hpp \
	Dog.hpp \
	WrongAnimal.hpp \
	WrongCat.hpp

CPP = c++

FLAGS = -Wall -Wextra -Werror -I. -std=c++98

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
