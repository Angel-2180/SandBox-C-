#include "ex_05.h"
#include <iostream>

using namespace day_02::ex_05;

sloth::sloth(std::string tmp)
{
	this->name = tmp;
	nbrOfSloth += 1;
	this->thisSlothNbr += nbrOfSloth;
	std::cout << "Sloth " << "[" << thisSlothNbr << ']' << " is alive!" << std::endl;
}

sloth::sloth(sloth& sloth)
{
	this->name = sloth.name;
	nbrOfSloth += 1;
	this->thisSlothNbr += nbrOfSloth;
	std::cout << "Sloth " << "[" << thisSlothNbr << ']' << " is alive!" << std::endl;
}

sloth::~sloth()
{
	std::cout << "Sloth " << "[" << thisSlothNbr << ']' << " died! Why did you do that?!" << std::endl;
	nbrOfSloth--;
}

void sloth::start_moving()
{
	if (moving == true)
	{
		std::cout << "Sloth " << thisSlothNbr << " is already moving." << std::endl;
	}

	if (sleeping == true)
	{
		std::cout << "Sloth " << nbrOfSloth << " stops sleeping" << std::endl;
		sleeping = false;
	}

	if (moving == false)
	{
		std::cout << "Sloth " << nbrOfSloth << " starts moving." << std::endl;
		moving = true;
	}
}

void sloth::start_sleeping()
{
	if (sleeping == true)
	{
		std::cout << "Sloth " << nbrOfSloth << " is already sleeping" << std::endl;
	}

	if (sleeping == false)
	{
		if (moving == true)
		{
			std::cout << "Sloth " << nbrOfSloth << " stops moving" << std::endl;
			moving = false;
		}

		if (moving == false)
		{
			std::cout << "Sloth " << nbrOfSloth << " falls asleep." << std::endl;
			sleeping = true;
		}
	}
}

int sloth::get_nb_sloth()
{
	return nbrOfSloth;
}

std::string sloth::get_name()
{
	return this->name;
}

int	main(int, char* [])
{
	using namespace day_02::ex_05;

	std::string tmp = "bobette";

	sloth s1(tmp);
	sloth s2(s1);

	tmp = "george";

	sloth s3(tmp);

	s2 = s3;

	std::cout << "nb sloth: " << sloth::get_nb_sloth() << std::endl;
	std::cout << "Sloth [1] name: " << s1 << std::endl;
	std::cout << "Sloth [2] name: " << s2.get_name() << std::endl;
	std::cout << "Sloth [3] name: " << s3 << std::endl;

	return EXIT_SUCCESS;
}