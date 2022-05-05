#include <iostream>
#include "sloda.h"


sloda::sloda()
{
	std::cout << "sloda created" << std::endl;
}

sloda::~sloda()
{
	std::cout << "sloda destroyed" << std::endl;
}

void sloda::print() const
{
	animal::print();
	std::cout << "and I am also a sloth" << std::endl;
	std::cout << "who is mixed with a panda" << std::endl;
}