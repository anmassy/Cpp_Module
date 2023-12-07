# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 10:48:53 by anmassy           #+#    #+#              #
#    Updated: 2023/11/29 13:54:26 by anmassy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

#Colors:
CURSIVE	= \e[33;3m
END = \033[0m

all : $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) megaphone.cpp -o $(NAME)
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