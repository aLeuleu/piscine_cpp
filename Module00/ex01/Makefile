
NAME=PhoneBook

SRC=phonebook.cpp Contact.cpp main.cpp


OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -g3 -Wall -Wextra -Werror -o $(NAME) $(OBJ) -std=c++98

%.o: %.cpp
	clang++ -g3 -Wall -Wextra -Werror -c $< -o $@ -std=c++98

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJ)

re: fclean all

.PHONY: all clean fclean re
