#include "Harl.hpp"

void Harl::debug(void) {

	std::cout << "debug.." << std::endl;
}

void Harl::info(void) {

	std::cout << "info.." << std::endl;
}

void Harl::warning(void) {

	std::cout << "warning.." << std::endl;
}

void Harl::error(void) {

	std::cout << "error.." << std::endl;
}

void Harl::complain(std::string level) {

	void (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};
	std::string string_lvl[4] = {"debug", "error", "info", "warning"};
	for (int i = 0; i < 4; i++) {
		if (level == string_lvl[i])
			(this->*ptr[i])();
	}
}
