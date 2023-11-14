#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>
#include <list>
#include <stdlib.h>

#define BAD_NUMBER_OF_ARG 1
#define NO_NUMBER_PROVIDED 2
#define FORBIDDEN_CHARS 3

template<typename T>
void swap(T &a, T &b) {
	T tmp = b;
	b = a;
	a = tmp;
}

template<typename T>
void display(T &v) {

	typename T::const_iterator it = v.begin();
	typename T::const_iterator ite = v.end();
	while (it != ite)
		std::cout << " " << *(it++);
	std::cout << std::endl;
}

bool correct_number_of_arg(int argc);
void exit_with_error(int i);
void parsing_argv1(const std::string &input, std::vector<int> &A, std::list<int> &B);
void mergeInsertionSort(std::vector<int> &array);
void mergeInsertionSort(std::list<int> &array);
void splitAndMergeInsertionSort(std::vector<int> &vector, size_t size);
void splitAndMergeInsertionSort(std::list<int> &vector, size_t size);
std::vector<int> merge_custom(std::vector<int> left, std::vector<int> right);
std::list<int> merge_custom(std::list<int> left, std::list<int> right);
void insertionSort(std::vector<int> &vector);
void insertionSort(std::list<int> &vector);
void parse_multiple_args(char **argv, int argc, std::list<int> &B, std::vector<int> &A);

bool check_at_least_one_number(std::string argv1);

bool check_forbidden_chars(std::string argv1);

int main(int argc, char **argv) {
	std::vector<int> A;
	std::list<int> B;

	if(!correct_number_of_arg(argc))
		exit_with_error(BAD_NUMBER_OF_ARG);
	if (!check_at_least_one_number(argv[1]))
		exit_with_error(NO_NUMBER_PROVIDED);
	if (!check_forbidden_chars(argv[1]))
		exit_with_error(FORBIDDEN_CHARS);

	if (argc > 2)
		parse_multiple_args(argv, argc, B, A);
	else
		parsing_argv1(argv[1], A, B);

	std::cout << "Before: " << std::endl;
	display(A);
//	display(B);

	unsigned int t1;
	t1 = clock();
	mergeInsertionSort(A);
	t1 = clock() - t1;

	unsigned int t2;
	t2 = clock();
	mergeInsertionSort(B);
	t2 = clock() - t2;

	std::cout << "After : " << std::endl;
	display(A);
//	display(B);

	std::cout << "Time to process a range of " << A.size() << " elements with vector : " << t1 << " clicks (" << ((float) t1) / CLOCKS_PER_SEC << " seconds)" << std::endl;
	std::cout << "Time to process a range of " << B.size() << " elements with list : " << t2 << " clicks (" << ((float) t2) / CLOCKS_PER_SEC << " seconds)" << std::endl;

	return 0;
}

bool check_forbidden_chars(std::string argv1) {
	for (size_t i = 0; i < argv1.size(); i++) {
		if (!(argv1[i] >= '0' && argv1[i] <= '9')
			&& (argv1[i] != ' ')
			&& (argv1[i] != '-')
			)
			return false;
	}
	return true;
}

bool check_at_least_one_number(std::string argv1) {
	for (size_t i = 0; i < argv1.size(); i++) {
		if (argv1[i] >= '0' && argv1[i] <= '9')
			return true;
	}
	return false;
}

void parse_multiple_args(char **argv, int argc, std::list<int> &B, std::vector<int> &A) {
	for (int i = 1; i < argc; i++) {
		int num = std::atoi(argv[i]);
		A.push_back(num);
		B.push_back(num);
	}
}

void mergeInsertionSort(std::vector<int> &array) {
	size_t size = array.size();

	if (size > 5)
		splitAndMergeInsertionSort(array, size);
	else
		insertionSort(array);
}

void mergeInsertionSort(std::list<int> &array) {
	size_t size = array.size();

	if (size > 5)
		splitAndMergeInsertionSort(array, size);
	else
		insertionSort(array);
}

void insertionSort(std::vector<int> &vector) {
	std::vector<int>::iterator A = vector.begin() + 1;
	std::vector<int>::iterator tmp = A;

	while (A != vector.end()) {
		if (A == vector.begin())
			A++;
		tmp = A;
		tmp--;
		if (*A < *(tmp)) {
			swap(*A, *(tmp));
			A--;
			if (tmp != vector.begin())
				tmp--;
		} else {
			A++;
			tmp++;
		}
	}
}

void insertionSort(std::list<int> &arr) {
	std::list<int>::iterator A = arr.begin();
	std::list<int>::iterator B = A;
	A++;

	while (A != arr.end()) {
		if (A == arr.begin())
			A++;
		B = A;
		B--;
		if (*A < *(B)) {
			swap(*A, *(B));
			A--;
			if (B != arr.begin())
				B--;
		} else {
			A++;
			B++;
		}
	}
}

void splitAndMergeInsertionSort(std::vector<int> &array, size_t size) {
	std::vector<int> left_array;
	std::vector<int> right_array;

	if (size == 1)
		return;
	size_t i = 0;
	size_t half = size / 2;
	while (i < half)
		left_array.push_back(array[i++]);
	while (i < size)
		right_array.push_back(array[i++]);
	mergeInsertionSort(left_array);
	mergeInsertionSort(right_array);
	array = merge_custom(left_array, right_array);
}

void splitAndMergeInsertionSort(std::list<int> &array, size_t size) {
	std::list<int> left_array;
	std::list<int> right_array;
	std::list<int>::const_iterator it=array.begin();
	std::list<int>::const_iterator ite=array.end();

	if (size == 1)
		return;
	while (it != ite){
		left_array.push_back(*(it++));
		if (it != ite)
			right_array.push_back(*(it++));
	}

	mergeInsertionSort(left_array);
	mergeInsertionSort(right_array);
	array = merge_custom(left_array, right_array);
}

std::vector<int> merge_custom(std::vector<int> left, std::vector<int> right) {
	std::vector<int> result;

	std::vector<int>::const_iterator leftit = left.begin();
	std::vector<int>::const_iterator leftite = left.end();
	std::vector<int>::const_iterator rightit = right.begin();
	std::vector<int>::const_iterator rightite = right.end();

	//merge the little value first
	while (leftit != leftite && rightit != rightite) {
		if (*leftit < *rightit)
			result.push_back(*(leftit++));
		else
			result.push_back(*(rightit++));
	}

	//pushing the rest ..
	while (leftit != leftite)
		result.push_back(*(leftit++));
	while (rightit != rightite)
		result.push_back(*(rightit++));

	//the result should be one big sorted vector
	return result;
}

std::list<int> merge_custom(std::list<int> left, std::list<int> right) {
	std::list<int> result;

	std::list<int>::const_iterator leftit = left.begin();
	std::list<int>::const_iterator leftite = left.end();
	std::list<int>::const_iterator rightit = right.begin();
	std::list<int>::const_iterator rightite = right.end();

	//merge the little value first
	while (leftit != leftite && rightit != rightite) {
		if (*leftit < *rightit)
			result.push_back(*(leftit++));
		else
			result.push_back(*(rightit++));
	}

	//pushing the rest ..
	while (leftit != leftite)
		result.push_back(*(leftit++));
	while (rightit != rightite)
		result.push_back(*(rightit++));

	//the result should be one big sorted vector
	return result;
}

void exit_with_error(int i) {
	std::cerr << "An error occured" << std::endl;
	exit(i);
}

bool correct_number_of_arg(int argc) {
	return (argc >= 2);
}

void parsing_argv1(const std::string &input, std::vector<int> &A, std::list<int> &B) {
	std::istringstream iss(input);

	int number;
	while (iss >> number) {
		A.push_back(number);
		B.push_back(number);
	}
}