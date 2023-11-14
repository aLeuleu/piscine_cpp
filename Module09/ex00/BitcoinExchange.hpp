#ifndef CPP_MODULE09_EX00_BITCOINEXCHANGE_HPP_
# define CPP_MODULE09_EX00_BITCOINEXCHANGE_HPP_

#include <map>
#include <fstream>
class BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &other);
		virtual ~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &other);

		void parseDB();
		void processInputFile();
		void processLine();
		bool isValidDate(std::string date);
		std::ifstream &getDatabaseFile();
		std::ifstream &getInputFile();

	private:
		std::map<std::string, float>	data;
		std::ifstream					databaseFile;
		std::ifstream					inputFile;
};
#endif