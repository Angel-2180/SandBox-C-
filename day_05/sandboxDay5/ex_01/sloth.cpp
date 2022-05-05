
#include <iostream>
#include "sloth.h"


sloth::sloth()
{
	std::cout << "sloth created" << std::endl;
}

sloth::~sloth()
{
	std::cout << "sloth destroyed" << std::endl;
}

void sloth::print() const
{
	animal::print();
	std::cout << "and I am also a sloth" << std::endl;
}