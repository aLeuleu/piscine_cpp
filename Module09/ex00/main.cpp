#include <fstream>
#include <iostream>
#include <map>
#include "BitcoinExchange.hpp"

#define DATABASE "/Users/aurelienlevra/CLionProjects/cpp/Module09/ex00/data.csv"
#define MISSING_INPUT_FILE 1
#define CANNOT_OPEN_FILE 2

void	openFile(std::ifstream &stream, std::string fileName){
	stream.open(fileName);
	if (!stream.is_open()){
		std::cerr << "Cannot open " << fileName << std::endl;
		exit(CANNOT_OPEN_FILE);
	}
}

int main(int argc, char** argv)
{

	BitcoinExchange bc;
	if (argc != 2){
		std::cerr << "Missing input file.." << std::endl;
		exit(MISSING_INPUT_FILE);
	}

	openFile(bc.databaseFile, DATABASE);
	openFile(bc.inputFile, argv[1]);

	bc.parseDB();

	bc.processInputFile();


	return 0;
}