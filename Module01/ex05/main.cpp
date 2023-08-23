#include <iostream>
#include "Harl.hpp"

using namespace std;


int main() {
	Harl jean;

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
