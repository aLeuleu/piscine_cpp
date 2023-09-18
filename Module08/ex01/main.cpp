#include "Span.hpp"
#include <iostream>

int main() {

//	Span sp = Span(5);
//
//	sp.addNumber(6);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(19);
//	sp.displayData();
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
	std::cout << "f1" << std::endl;

	srand(time(NULL));
	Span sp2;

	sp2 = Span(20000);
	std::cout << "f2" << std::endl;

	try {
		sp2.randRange(20000);
		std::cout << "f3" << std::endl;

	}
	catch (...) {}
//		sp2.displayData();


	unsigned int t;

	t = clock();
	int longestSpan = sp2.longestSpan();
	t = clock() - t;
	std::cout << "longestSpan() took " << t << " clicks (" << ((float) t) / CLOCKS_PER_SEC << " seconds)" << std::endl;

	return 0;
}