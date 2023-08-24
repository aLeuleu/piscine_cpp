#include "Harl.hpp"

void Harl::debug(void) {
	if (_debugFilter)
		std::cout << "[DEBUG]" << std::endl << "debug.." << std::endl;
}

void Harl::info(void) {
	if (_infoFilter)
		std::cout << "[INFO]" << std::endl << "info.." << std::endl;
}

void Harl::warning(void) {
	if (_warningFilter)
		std::cout << "[WARNING]" << std::endl << "warning.." << std::endl;
}

void Harl::error(void) {
	if (_errorFilter)
		std::cout << "[ERROR]" << std::endl << "error.." << std::endl;
}

void Harl::filter(std::string logToFilter)
{
	std::string tab[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};

	for (int i = 0; i < 4; ++i) {
		if (logToFilter == tab[i]){
			trigFilter(i);
			break;
		}
		if ( i == 3)
			trigFilter(4);
	}
}

void Harl::trigFilter(int lvl){
	_debugFilter =false;
	_errorFilter = false;
	_infoFilter = false;
	_warningFilter = false;
	switch (lvl) {
		case 0:
			_debugFilter =true;
			break;
		case 1:
			_errorFilter = true;
			break;
		case 2:
			_infoFilter = true;
			break;
		case 3:
			_warningFilter = true;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}


void Harl::complain(std::string level) {

	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
	std::string string_lvl[4] = {"debug", "error", "info", "warning"};
	for (int i = 0; i < 4; i++) {
		if (level == string_lvl[i])
			(this->*ptr[i])();
	}
}
Harl::Harl() : _debugFilter(true), _infoFilter(true), _warningFilter(true), _errorFilter(true)
{

}