#include <iostream>
#include "ex_04.h"

namespace day_02
{
	namespace ex_04
	{
		void sloth::start_moving()
		{
			if (move == true)
			{
				std::cout << "Sloth " << index << " is already moving." << '\n';
			}
			if (sleep == true)
			{
				std::cout << "Sloth " << index << " stops sleeping." << '\n';

				std::cout << "Sloth " << index << " starts moving." << '\n';
				sleep = false;
				move = true;
			}
			if (move == false)
			{
				move = true;
				std::cout << "Sloth " << index << " starts moving." << '\n';
			}
		}
		void sloth::start_sleeping()
		{
			if (sleep == true)
			{
				std::cout << "Sloth " << index << " is already sleeping." << '\n';
			}
			if (move == true)
			{
				move = false;
				sleep = true;

				std::cout << "Sloth " << index << " stops moving." << '\n';
				std::cout << "Sloth " << index << " falls asleep." << '\n';
			}
			if (sleep == false)
			{
				sleep = true;

				std::cout << "Sloth " << index << " falls asleep." << '\n';
			}
		}
	}
}

int main(int, char* [])
{
	day_02::ex_04::sloth s;

	s.start_moving();
	s.start_moving();
	s.start_sleeping();
	s.start_sleeping();
	s.start_moving();

	return EXIT_SUCCESS;
}