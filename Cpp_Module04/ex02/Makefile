# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 11:40:42 by anmassy           #+#    #+#              #
#    Updated: 2024/01/11 10:37:54 by anmassy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRCS =	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp \
		
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

#Colors:
CURSIVE	= \e[33;3m
END = \033[0m

all : $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "$(CURSIVE)-Compile with : $(CFLAGS).$(END)"
	@echo "$(CURSIVE)-Executable is ready.$(END)"
	

clean :
	@echo "$(CURSIVE)Cleaning files...$(END)"
	@$(RM) $(NAME)
	
fclean : clean
	@echo "$(CURSIVE)Cleaning binaries...$(END)"
	@$(RM) $(NAME)
	
re : fclean all

.PHONY : all clean fclean re