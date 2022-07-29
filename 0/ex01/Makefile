# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEfile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/21 16:22:25 by armaxima          #+#    #+#              #
#    Updated: 2022/04/21 18:43:03 by armaxima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

SRC = main.cpp \
	phbook.class.cpp\
	Contact.class.cpp

OBJ = $(SRC:.cpp=.o)

INC = phbook.class.hpp\
	Contact.class.hpp

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
