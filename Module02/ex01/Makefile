
NAME=02_01

SRC=Fixed.cpp main.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror -o $(NAME) $(OBJ) -std=c++98

%.o: %.cpp
	c++ -Wall -Wextra -Werror -c $< -o $@ -std=c++98

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJ)

re: fclean all

.PHONY: all clean fclean re