#pragma once
#include <string>

namespace day_02
{
	namespace ex_02
	{
		class sloth
		{
		public:
			sloth();
			~sloth();
			std::string alive;
			std::string dead;
		};

		sloth::sloth()
		{
			sloth::alive = "Sloth is alive!";
			sloth::dead = "Sloth died! Why did you do that?!";

			std::cout << alive << '\n';
			std::cout << dead << '\n';
		}

		sloth::~sloth()
		{
		}
	}
}