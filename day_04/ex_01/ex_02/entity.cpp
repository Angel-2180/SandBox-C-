#include "entity.h"
#include <iostream>
using namespace day_04::ex_02;

entity::entity()
{
	vie = 0;
	name = "entity";
}

std::string entity::to_string() const
{
	std::string s = "day_04::ex_02::entity";
	return s;
}

int entity::life()
{
	return this->vie;
}

void entity::operator++()
{
	this->vie += 1;
}