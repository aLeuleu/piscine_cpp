#include <iostream>
#include "BitcoinExchange.hpp"
#include <stdlib.h>

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { *this = other; }

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) {
	if (this != &other) {
		data = other.data;
	}
	return (*this);
}

void BitcoinExchange::parseDB() {

	if (!databaseFile.is_open())
		return;

	std::string line;
	std::string key;
	float		value;

	std::getline(databaseFile, line);
	while(!databaseFile.eof()){
		getline(this->databaseFile, line, ',');
		key = line;
		if (!databaseFile.eof()){
			getline(this->databaseFile, line);
			value = strtod(line.c_str(), NULL);
			data[key] = value;
		}
	}
	databaseFile.close();

}
void BitcoinExchange::processInputFile() {

	if (!this->inputFile.is_open())
		return;

	std::string line;
	getline(inputFile, line);
	while(!inputFile.eof())
		processLine();
}
void BitcoinExchange::processLine() {
	std::string line;
	float value;
	std::string date;
	char *rest;
	std::map<std::string, float>::const_iterator rate;

	getline(inputFile, line);
	if (line.find(" | ", 0) != 10) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return ;
	}
	date = line.substr(0, 10);
	value = strtod(line.c_str() + 13, &rest);
	if (*rest != '\0')
		std::cerr << "Error: bad input => " << line << std::endl;
	else if (!isValidDate(date))
		std::cerr << "Error: not valid date => " << date << std::endl;
	else if (value < 0)
		std::cerr << "Error: not a positive number" << std::endl;
	else if (value > 1000)
		std::cerr << "Error: too large number" << std::endl;
	else {
		rate = this->data.upper_bound(date);
		if (rate != data.begin())
			--rate;
		std::cout << date << " => " << value << " = "
				  << value * rate->second << std::endl;
	}
}


bool BitcoinExchange::isValidDate(std::string date) {
	static const int dayPerMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (date[4] != '-' || date[7] != '-')
		return (false);
	int year = strtod(date.c_str(), NULL);
	int month = strtod(date.c_str() + 5, NULL);
	int day = strtod(date.c_str() + 8, NULL);

	if (year >= 0
		&& month > 0 && month <= 12
		&& day >= 1 && day <= dayPerMonth[month - 1]
		+ (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
		return (true);
	return (false);
}