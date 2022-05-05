#include <iostream>
#include "animal.h"

animal::animal()
{
	std::cout << "animal created" << std::endl;
}

animal::~animal()
{
	std::cout << "animal destroyed" << std::endl;
}

void animal::print() const
{
	std::cout << "I am an animal" << std::endl;
}