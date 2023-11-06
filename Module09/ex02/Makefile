
NAME=PmergeMe

SRC= main.cpp \

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -g3  -Wall -Wextra -Werror -o $(NAME) $(OBJ) -std=c++98

%.o: %.cpp %.hpp
	c++ -g3 -Wall -Wextra -Werror -c $< -o $@ -std=c++98

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJ)

re: fclean all

leaks: re
	valgrind --quiet --leak-check=full --show-leak-kinds=all --log-file=leaks.txt -- ./$(NAME) "2 65 3 0" > $(NAME)_output.txt 2>&1

.PHONY: all clean fclean re leaks