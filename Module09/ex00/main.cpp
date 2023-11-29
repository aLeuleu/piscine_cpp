#include <fstream>
#include <iostream>
#include "BitcoinExchange.hpp"
#include <stdlib.h>

#define DATABASE "data.csv"
#define MISSING_INPUT_FILE 1
#define CANNOT_OPEN_FILE 2

void	openFile(std::ifstream &stream, std::string fileName){
	stream.open(fileName.c_str());
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

	openFile(bc.getDatabaseFile(), DATABASE);
	openFile(bc.getInputFile(), argv[1]);

	bc.parseDB();

	bc.processInputFile();


	return 0;
}

/* input.txt
date | value
2011-01-03 | 3
2011-01-03 | 2
2011-01-03 | 1
2011-01-03 | 1.2
2011-01-09 | 1
2012-01-11 | -1
2001-42-42
2012-01-11 | 1
2012-01-11 | 2147483648
 */