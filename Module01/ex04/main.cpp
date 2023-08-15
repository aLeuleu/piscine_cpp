#include <iostream>
#include <fstream>

std::string read_file(const std::string &filename);
void replace_str(std::string &str, std::string s1, std::string s2);
void create_file(std::string data, std::string filename);

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage : ./replace <filename> <s1> <s2> " << endl;
		return (0);
	}
	std::string filename = argv[1];
	std::string data = read_file(filename);
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	replace_str(data, s1, s2);
	create_file(data, filename + ".replace");
	return (0);
}

void create_file(std::string data, std::string filename) {
	std::ofstream output(filename);
	output << data;
}

void replace_str(std::string &str, std::string s1, std::string s2) {
	size_t res = str.find(s1);

	while(res != std::string::npos){
		str.erase(res, s1.size());
		str.insert(res, s2);
		res = str.find(s1);
	}
}

std::string read_file(const std::string &filename) {

	std::ifstream input(filename);
	std::string line;
	std::string data;

	if (!input.is_open()){
		std::cout << "Fail to open file" << endl;
		return ("");
	}

	while (getline(input, line))
		data += line + "\n";

	return (data);
}
