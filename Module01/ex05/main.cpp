#include <iostream>
#include <fstream>

using namespace std;
string read_file(const string &filename);
void replace_str(string &str, string s1, string s2);
void create_file(string data, string filename);

int main(int argc, char **argv) {
	if (argc != 4) {
		cout << "Usage : ./replace <filename> <s1> <s2> " << endl;
		return (0);
	}
	string filename = argv[1];
	string data = read_file(filename);
	string s1 = argv[2];
	string s2 = argv[3];

	replace_str(data, s1, s2);
	create_file(data, filename + ".replace");
	return (0);
}

void create_file(string data, string filename) {
	ofstream output(filename);
	output << data;
}

void replace_str(string &str, string s1, string s2) {
	size_t res = str.find(s1);

	while(res != string::npos){
		str.erase(res, s1.size());
		str.insert(res, s2);
		res = str.find(s1);
	}
}

string read_file(const string &filename) {

	ifstream input(filename);
	string line;
	string data;

	if (!input.is_open()){
		cout << "Fail to open file" << endl;
		return ("");
	}

	while (getline(input, line))
		data += line + "\n";

	return (data);
}
