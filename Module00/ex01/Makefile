
NAME=phonebook

all:
	@clang++ -Wall -Wextra -Werror $(NAME).cpp -o $(NAME) -std=c++98

clean:
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re