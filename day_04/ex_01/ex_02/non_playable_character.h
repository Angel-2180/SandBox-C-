#pragma once
#include "entity.h"
namespace day_04
{
	namespace ex_02
	{
		class non_playable_character : public entity
		{
		public:
			non_playable_character();
			~non_playable_character();

			//function
			void print_life() const;
			std::string to_string() const;
		};
	}
}