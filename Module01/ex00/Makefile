
NAME=Zombie

SRC=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all:
	@clang++ -Wall -Wextra -Werror $(SRC) -o $(NAME) -std=c++98

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re