SRCS =	./Bureaucrat.cpp \
		./Form.cpp \
		./main.cpp

CC = c++
NAME = ex01

CFLAG = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAG) -c $< -o $@

%.p: %.cpp
	$(CC) -MM $< > $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re