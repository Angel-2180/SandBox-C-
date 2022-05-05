#pragma once
namespace day_02
{
	namespace ex_04
	{
		int n = 1;
		class sloth
		{
		public:
			int index;
			bool sleep;
			bool move;

			sloth();
			~sloth();
			void start_moving();

			void start_sleeping();
		};

		sloth::sloth()
		{
			index = n;
			std::cout << "Sloth " << index << " is alive!" << '\n';
			sleep = false;
			move = false;
			start_sleeping();
		}

		sloth::~sloth()
		{
			std::cout << "Sloth " << index << " died! Why did you do that ? !" << '\n';
		}
	}
}