#include "playable_character.h"
#include "object.h"
#include "non_playable_character.h"
#include <iostream>

using namespace day_04::ex_02;

playable_character::playable_character()
{
	vie = 20;
	name = "playable_character";
}

playable_character::~playable_character()
{
}

playable_character& playable_character::operator*(non_playable_character& c2)
{
	c2.vie -= 4;
	return *this;
}

void playable_character::print_life() const
{
	std::cout << this->vie << std::endl;
}

std::string playable_character::to_string() const
{
	std::string s = "day_04::ex_02::playable_character";
	return s;
}