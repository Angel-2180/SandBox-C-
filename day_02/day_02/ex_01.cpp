#include "ex_01.h"

#include <iostream>

namespace day_02
{
	namespace ex_01
	{
		void swap(int& a, int& b)
		{
			int temp;
			temp = a;
			a = b;
			b = temp;
		}
	}
}

int main()
{
	int a = 10;
	int b = 20;
	day_02::ex_01::swap(a, b);

	std::cout << a << '\n';
	std::cout << b << '\n';
}