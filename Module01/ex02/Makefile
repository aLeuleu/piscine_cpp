
NAME=HI_THIS_IS_BRAIN

SRC=main.cpp 

all:
	@c++ -Wall -Wextra -Werror $(SRC) -o $(NAME) -std=c++98

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

run: all
	./$(NAME)
	leaks --atExit -- ./$(NAME) | tail -n 2
	make clean

leaks: all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re run
