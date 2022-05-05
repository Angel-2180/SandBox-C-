#pragma once
#include <string>
namespace day_04
{
	namespace ex_02
	{
		class object
		{
		public:
			object();
			~object();

			std::string name;
			std::string to_string() const;
		};
	}
}