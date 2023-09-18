#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>


#define BAD_NUMBER_OF_ARG 1

template<typename T>
void	swap(T &a, T &b){
	T tmp = b;
	b = a;
	a = tmp;
}

bool correct_number_of_arg(int argc);
void exit_with_error(int i);
void parsing(const std::string &input, std::vector<int> &parsedIntegers);
void mergeInsertionSort(std::vector<int> &array);
void splitAndMergeInsertionSort(std::vector<int> &vector, size_t size);

std::vector<int> merge_custom(std::vector<int> left, std::vector<int> right);

void displayVector(std::vector<int> vector_1);

void insertionSort(std::vector<int> &vector);

int main(int argc, char **argv) {
	if (!correct_number_of_arg(argc))
		exit_with_error(BAD_NUMBER_OF_ARG);

	std::vector<int> input;
	parsing(argv[1], input);

	mergeInsertionSort(input);
	displayVector(input);
	return 0;
}

void displayVector(std::vector<int> vector_1) {
	for (std::vector<int>::iterator it = vector_1.begin(); it < vector_1.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void mergeInsertionSort(std::vector<int> &array) {
	size_t size = array.size();

	if (size > 5)
		splitAndMergeInsertionSort(array, size);
	else
		insertionSort(array);
}

void insertionSort(std::vector<int> &vector) {
	std::vector<int>::iterator A = vector.begin() + 1;
	std::vector<int>::iterator tmp = A;

	while (A != vector.end()){
		if (*A < *(A-1)){
			if (tmp< A)
				tmp = A;
			swap(*A,*(A-1));
			A--;
		}
		else{
			if (A < tmp)
				A = tmp;
			else
				A++;
		}
	}

}

void splitAndMergeInsertionSort(std::vector<int> &array, size_t size) {
	std::vector<int> left_array;
	std::vector<int> right_array;

	if (size == 1)
		return;
	size_t i = 0;
	size_t half = size/2;
	while (i < half)
		left_array.push_back(array[i++]);
	while (i < size)
		right_array.push_back(array[i++]);
	mergeInsertionSort(left_array);
	mergeInsertionSort(right_array);
	array = merge_custom(left_array, right_array);
}

std::vector<int> merge_custom(std::vector<int> left, std::vector<int> right) {
	std::vector<int> result;

	std::vector<int>::const_iterator leftit = left.begin();
	std::vector<int>::const_iterator rightit = right.begin();

	//merge the little value first
	while (*leftit && *rightit){
		if (*leftit < *rightit)
			result.push_back(*(leftit++));
		else
			result.push_back(*(rightit++));
	}

	//pushing the rest ..
	while(*leftit)
		result.push_back(*(leftit++));
	while(*rightit)
		result.push_back(*(rightit++));

	//the result should be one big sorted vector
	return result;
}

void exit_with_error(int i) {
	std::cerr << "An error occured" << std::endl;
	exit(i);
}

bool correct_number_of_arg(int argc) {
	return (argc == 2);
}

void parsing(const std::string &input, std::vector<int> &parsedIntegers) {
	std::istringstream iss(input); // Create a string stream for parsing

	int number;
	while (iss >> number) { // Parse integers from the string stream
		parsedIntegers.push_back(number); // Store the parsed integer in the vector
	}
}