
NAME=03_02

SRC=ClapTrap.cpp main.cpp FragTrap.cpp

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror -o $(NAME) $(OBJ) -std=c++98

%.o: %.cpp %.hpp
	c++ -Wall -Wextra -Werror -c $< -o $@ -std=c++98

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJ)

re: fclean all

leaks: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re