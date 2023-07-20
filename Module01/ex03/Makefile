
NAME=Unnecessary_violence

SRC= main.cpp Weapon.cpp \
     HumanA.cpp HumanB.cpp

all:
	@clang++ -Wall -Wextra -Werror -o $(NAME) $(SRC) -std=c++98

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

run: all
	./$(NAME)
	leaks --atExit -- ./$(NAME) | tail -n 2
	make clean

.PHONY: all clean fclean re run