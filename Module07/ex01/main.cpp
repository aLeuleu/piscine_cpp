#include "iter.hpp"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int arrayA[10];
	float arrayB[10];
	const int arrayC[3] = {1, 2, 3};

	iter(arrayA, 10, randomize<int>);
	iter(arrayA, 10, print<const int &>);

	std::cout << std::endl;

	iter(arrayB, 10, randomize<float>);
	iter(arrayB, 10, print<const float &>);

	std::cout << std::endl;

	iter(arrayC, 3, print<const int&>);


	return 0;
}

//class Awesome
//{
//	public:
//		Awesome (void) : _n(42) {return ;}
//		int get (void) const {return _n;}
//	private:
//		int _n;
//};
//
//std::ostream & operator<< (std::ostream &o, Awesome const & rhs)
//{
//	o << rhs.get();
//	return o;
//}
//
//template<typename T>
//void print(T& x)
//{
//	std::cout << x << std::endl;
//	return;
//}
//
//int main (){
//	int tab[] = {0,1,2,3,4};
//	Awesome tab2[5];
//
//	iter(tab, 5, print<const int>);
//	iter(tab2, 5 , print<Awesome>);
//	return 0;
//}