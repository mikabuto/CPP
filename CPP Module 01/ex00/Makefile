# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/26 19:02:36 by mikabuto          #+#    #+#              #
#    Updated: 2022/11/26 19:12:15 by mikabuto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

SRCS_DIR = ./
SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
HEADERS = Zombie.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))


$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp $(HEADERS) Makefile
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re