#include <string>
#include "whatever.hpp"

struct data{
	std::string text;
};
int main()
{
	int a1 = 4;
	int b1 = 2;

	print(a1,b1);
	swap(a1, b1);
	print(a1,b1);

	std::cout << std::endl;


	data a2 ;
	a2.text = "Quoi ? ";
	data b2 ;
	b2.text = "Coubeh";

	print(a2.text,b2.text);
	swap(a2, b2);
	print(a2.text,b2.text);

	std::cout << std::endl;


	int a3 = 10;
	int b3 = 2;

	print(a3,b3);
	std::cout << "Maximum is : " << max(a3, b3) << std::endl;
	std::cout << "Minimum is : " << min(a3, b3) << std::endl;


	std::cout << std::endl;



	char a4 = 'a';
	char b4 = 'z';

	print(a4,b4);
	std::cout << "Maximum is : " << max(a4, b4) << std::endl;
	std::cout << "Minimum is : " << min(a4, b4) << std::endl;


	return 0;
}