#include <string>
#include <iostream>

using namespace std;

int			main(void)
{
	string stringMSG="HI THIS IS BRAIN";
	string *stringPTR = &stringMSG;
	string &stringREF = stringMSG;

	cout << "Address of      stringMSG: " << &stringMSG << endl;
	cout << "Address held by stringPTR: " << stringPTR << endl;
	cout << "Address held by stringREF: " << &stringREF << endl;

	cout << "Value held by stringMSG: " << stringMSG << endl;
	cout << "Value held by stringPTR: " << *stringPTR << endl;
	cout << "Value held by stringREF: " << stringREF << endl;
	return (0);
}