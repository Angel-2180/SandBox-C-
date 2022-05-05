#pragma once
#include <string>

namespace day_02
{
	namespace ex_03
	{
		int n = 1;
		class sloth
		{
		public:
			int index;
			sloth();
			~sloth();
		};

		sloth::sloth()
		{
			index = n;
			std::cout << "Sloth " << index << " is alive!" << '\n';
			n++;
		}

		sloth::~sloth()
		{
			std::cout << "Sloth " << index << " died!Why did you do that ? !" << '\n';
		}
	}
}