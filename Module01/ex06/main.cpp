#include <iostream>
#include "Harl.hpp"


int main(int argc, char **argv) {

	Harl jean;

	if (argc == 2){
		std::string argv1(argv[1]);
		jean.filter(argv1);
	}
	if (argc > 2)
		std::cout << "Too much args !  .." << std::endl;

	jean.complain("debug");
	jean.complain("debug");
	jean.complain("info");
	jean.complain("warning");
	jean.complain("warning");
	jean.complain("warning");
	jean.complain("warning");
	jean.complain("error");
	return (0);
}
