#include <iostream>
#include "panda.h"

panda::panda()
{
	std::cout << "panda created" << std::endl;
}

panda::~panda()
{
	std::cout << "panda destroyed" << std::endl;
}

void panda::print() const
{
	animal::print();
	std::cout << "and I am also a panda" << std::endl;
}