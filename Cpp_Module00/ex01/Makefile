# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 10:48:53 by anmassy           #+#    #+#              #
#    Updated: 2023/11/25 15:59:35 by anmassy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS =	contact.cpp \
		phonebook.cpp

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