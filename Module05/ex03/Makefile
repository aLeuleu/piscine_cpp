
NAME=05_02

SRC= main.cpp \
	 Bureaucrat.cpp \
	 AForm.cpp \
	 ShrubberyCreationForm.cpp \
	 RobotomyRequestForm.cpp \
	 PresidentialPardonForm.cpp \
	 Intern.cpp

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
	valgrind --quiet --leak-check=full --show-leak-kinds=all  --log-file=valgrind_$(NAME)_output.txt --separate-logs=yes -- ./$(NAME) > $(NAME)_output.txt 2>&1
	cat valgrind_$(NAME)_output.txt

.PHONY: all clean fclean re leaks