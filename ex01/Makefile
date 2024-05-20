# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/17 12:41:57 by agan              #+#    #+#              #
#    Updated: 2024/05/17 12:41:58 by agan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Animal
SRCS	= main.cpp Cat.cpp Dog.cpp Animal.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJS 	= ${SRCS:.cpp=.o}
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow -g
RM		= rm -fr

#------------------------------------------------------------------------

# colours
GREEN = \033[0;32m
B_GREEN = \033[1;32m
BROWN = \033[0;33m
B_BROWN = \033[1;33m
END = \033[0m

#------------------------------------------------------------------------

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(B_GREEN)$(NAME) compiled$(END)"

clean:
	@rm -fr $(OBJS)

fclean: clean
	@rm -fr $(NAME)
	@echo "$(B_GREEN)fclean completed$(END)"

re: fclean all

.cpp.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}
	@echo "$(B_GREEN)$< compiled.$(END)"

.PHONY: all clean fclean re

