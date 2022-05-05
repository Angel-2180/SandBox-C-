#pragma once
#include "entity.h"
#include "non_playable_character.h"

namespace day_04
{
	namespace ex_02
	{
		class playable_character : public entity
		{
		public:
			playable_character();
			~playable_character();

			//function
			void print_life() const;
			std::string to_string() const;

			//operator overload
			playable_character& operator*(non_playable_character& c2);
		};
	}
}