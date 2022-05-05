#pragma once
#include <string>
#include "object.h"

namespace day_04
{
	namespace ex_02
	{
		class entity : public object
		{
		public:
			// constructor && destructor
			entity();

			//var
			int vie;

			//function
			int life();
			std::string to_string() const;

			//operator overload
			void operator++();
		};
	}
}