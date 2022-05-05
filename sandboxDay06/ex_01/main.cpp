#include "ex_01.h"
#include <iostream>
int main()
{
	int i1 = 10, i2 = 20;
	std::string s1 = "manger", s2 = "miam";

	int i = add<int>(i1, i2);

	std::cout << i << std::endl;

	swap(s1, s2);

	std::cout << "s1: " << s1 << " s2: " << s2 << std::endl;

	return 0;
}