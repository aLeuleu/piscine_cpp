
NAME=ZombieHorde

SRC=main.cpp zombie.cpp zombieHorde.cpp

all:
	@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME) -std=c++98

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

run: all
	./$(NAME)
	leaks --atExit -- ./$(NAME) | tail -n 2
	make clean

.PHONY: all clean fclean re run