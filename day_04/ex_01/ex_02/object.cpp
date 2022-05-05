#include "object.h"
#include <iostream>
#include <typeinfo>
#include <string>
using namespace day_04::ex_02;

object::object()
{
}

std::string object::to_string() const
{
	std::string s = "day_04::ex_02::object";
	return s;
}

object::~object()
{
}