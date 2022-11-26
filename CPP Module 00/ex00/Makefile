# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mikabuto <mikabuto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 21:21:46 by mikabuto          #+#    #+#              #
#    Updated: 2022/10/29 21:25:53 by mikabuto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS_DIR = ./
SRCS = megaphone.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))


$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp Makefile
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


check: $(NAME)
	@/bin/echo "================================================================"
	@/bin/echo "--->./megaphone \"shhhhh... I think the students are asleep...\""
	@/bin/echo "Expected  : SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) "shhhhh... I think the students are asleep..."
	@/bin/echo
	@/bin/echo

	@/bin/echo "================================================================"
	@/bin/echo "--->./megaphone Damnit \" ! \" \"Sorry students, I thought this thing was off.\""
	@/bin/echo "Expected  : DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
	@/bin/echo -n "Megaphone : "
	@./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	@/bin/echo
	@/bin/echo

	@/bin/echo "================================================================"
	@/bin/echo "--->./megaphone"
	@/bin/echo "Expected  : * LOUD AND UNBEARABLE FEEDBACK NOISE *"
	@/bin/echo -n "Megaphone : "
	@./$(NAME)
	@/bin/echo

.PHONY: all, clean, fclean, re, check