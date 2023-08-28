
NAME=05_01

SRC= main.cpp \
	 Bureaucrat.cpp \
	 Form.cpp \

OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -Wall -Wextra -Werror -o $(NAME) $(OBJ) -std=c++98

%.o: %.cpp %.hpp
	clang++ -Wall -Wextra -Werror -c $< -o $@ -std=c++98

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(OBJ)

re: fclean all

leaks: all
	valgrind --quiet --leak-check=full --show-leak-kinds=all --log-file=valgrind_$(NAME)_output.txt --separate-logs=yes -- ./$(NAME) > $(NAME)_output.txt 2>&1

.PHONY: all clean fclean re leaks

