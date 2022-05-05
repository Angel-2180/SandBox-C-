#pragma once
#include <string>
#include <iostream>

namespace day_02
{
	namespace ex_05
	{
		class sloth
		{
		private:
			int thisSlothNbr = 0;
			bool sleeping = false;
			bool moving = false;
		public:
			std::string name;

			sloth(std::string tmp);
			sloth(sloth& sloth);
			~sloth();

			void start_moving();
			void start_sleeping();
			static int get_nb_sloth();
			std::string get_name();
		};
		std::ostream& operator<<(std::ostream& os, sloth& sloth)
		{
			std::cout << sloth.name << std::endl;
			return os;
		}
		unsigned int nbrOfSloth = 0;
	}
}