# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 10:34:02 by anmassy           #+#    #+#              #
#    Updated: 2025/01/09 05:41:36 by anmassy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	./Bureaucrat.cpp \
		./main.cpp

CC = c++
NAME = ex00

CFLAG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.p)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

%.p: %.cpp
	$(CC) -MM $< > $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
