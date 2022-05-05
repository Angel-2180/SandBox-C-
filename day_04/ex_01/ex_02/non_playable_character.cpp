#include "non_playable_character.h"
#include "entity.h"
#include <iostream>

using namespace day_04::ex_02;

non_playable_character::non_playable_character()
{
	vie = 5;
	name = "non_playable_character";
}

non_playable_character::~non_playable_character()
{
	std::cout << "NPC is dead !" << std::endl;
}

void non_playable_character::print_life() const
{
	std::cout << this->vie << std::endl;
}

std::string non_playable_character::to_string() const
{
	std::string s = "day_04::ex_02::non_playable_character";
	return s;
}