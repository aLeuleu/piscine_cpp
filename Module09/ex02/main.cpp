#include <cstdlib>
#include <iostream>
#include <vector>
#include <sstream>

#define BAD_NUMBER_OF_ARG 1
bool correct_number_of_arg(int argc);
void exit_with_error(int i);
void parsing(const std::string &input, std::vector<int> &parsedIntegers);
void mergeInsertionSort(std::vector<int> &array);
void splitAndMergeInsertionSort(std::vector<int> &vector, size_t size);

std::vector<int> merge_custom(std::vector<int> left, std::vector<int> right);

int main(int argc, char **argv) {
	if (!correct_number_of_arg(argc))
		exit_with_error(BAD_NUMBER_OF_ARG);

	std::vector<int> input;
	parsing(argv[1], input);

	mergeInsertionSort(input);
	return 0;
}

void mergeInsertionSort(std::vector<int> &array) {
	size_t size = array.size();

	if (size > 15)
		splitAndMergeInsertionSort(array, size);
}

void splitAndMergeInsertionSort(std::vector<int> &array, size_t size) {
	std::vector<int> left_array;
	std::vector<int> right_array;

	size_t i = 0;
	size_t half = size/2;
	while (i < half)
		left_array.push_back(array[i++]);
	while (i < size)
		right_array.push_back(array[i++]);
	mergeInsertionSort(left_array);
	mergeInsertionSort(right_array);
	merge_custom(left_array, right_array);

}

std::vector<int> merge_custom(std::vector<int> left, std::vector<int> right) {
	std::vector<int> result;

	std::vector<int>::const_iterator leftit = left.begin();
	std::vector<int>::const_iterator rightit = right.begin();

	while (*leftit && *rightit){
		if (*leftit > *rightit)
			result.push_back(*(rightit++));
		else
			result.push_back(*(leftit++));
	}
	while(*leftit)
		result.push_back(*(leftit++));
	while(*rightit)
		result.push_back(*(rightit++));
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