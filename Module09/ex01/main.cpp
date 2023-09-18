
#include <stack>
#include <iostream>

enum op {
	plus = '+',
	minus = '-',
	mult = '*',
	divi = '/'
};
bool is_valid_RPN_expression(char *str);
bool is_RPN_operator(char i);
bool check_spaces(char *str);
void unstack(std::stack<int> &stack, char op);
int operation(int &a, int &b, char op);

bool begin_with_a_digit(char *str);
bool end_with_an_operation(char *str);
void printStack(std::stack<int> stack_1);

int main(int argc, char **argv) {

	if (argc != 2 || argv[1][0] == 0) {
		std::cerr << "Bad usage" << std::endl;
		return (1);
	}
	if (argv[1][1] == 0) {
		if (isdigit(argv[1][1])) {
			std::cout << argv[1][1] << std::endl;
			return (0);
		}
		else {
			std::cerr << "Bad usage" << std::endl;
			return (1);
		}
	}

	std::stack<int> stack;

	if (!is_valid_RPN_expression(argv[1])) {
		std::cerr << "Not a valid expression" << std::endl;
		return (1);
	}

	int i = 0;
	while (argv[1][i]) {
//		if (argv[1][i] != ' ')
//			std::cout << "argv[1][" << i << "] : "<<argv[1][i] << std::endl;
		if (is_RPN_operator(argv[1][i]))
			unstack(stack, argv[1][i]);
		if (isdigit(argv[1][i]))
			stack.push(argv[1][i] - '0');
//		if (argv[1][i] != ' ')
//			printStack(stack);
		i++;
	}
	printStack(stack);
	return (0);
}

void printStack(std::stack<int> stack_1) {
	std::stack<int> stack = stack_1;
	while (stack.size()) {
		std::cout << stack.top() << " ";
		stack.pop();
	}
	std::cout << std::endl;
}

void unstack(std::stack<int> &stack, char op) {
	int a = stack.top();
	stack.pop();
	int b = stack.top();
	int res = operation(a, b, op);
	stack.pop();
	stack.push(res);
}

int operation(int &a, int &b, char op) {
//	std::cout << "operation: " << a << " " << (char)op << " " << b << std::endl;
	switch (op) {
		case plus: return a + b;
		case minus: return b - a;
		case mult: return a * b;
		case divi: return b / a;
		default    : throw std::runtime_error("unexpected operator");
	}
}

bool is_valid_RPN_expression(char *str) {
	if (!check_spaces(str) || !begin_with_a_digit(str) || !end_with_an_operation(str))
		return false;
	int i = 0;
	while (str[i + 1]) {
		if (!isdigit(str[i]) && !is_RPN_operator(str[i]))
			return false;
		i += 2;
	}
	return true;
}

bool end_with_an_operation(char *str) {
	if (is_RPN_operator(str[strlen(str) - 1]))
		return true;
	return false;
}

bool begin_with_a_digit(char *str) {
	if (!isdigit(str[0]))
		return false;
	return true;
}

bool check_spaces(char *str) {
	int i = -1;
	while (str[++i]) {
		if (!(i % 2) && (str[i] == ' '))
			return false;
		if (i % 2 && (str[i] != ' '))
			return false;
	}
	if (str[i - 1] == ' ')
		str[i - 1] = 0;
	return true;
}

bool is_RPN_operator(char i) {
	switch (i) {
		case plus:
		case minus:
		case mult:
		case divi: return true;
		default : return false;
	}
}
