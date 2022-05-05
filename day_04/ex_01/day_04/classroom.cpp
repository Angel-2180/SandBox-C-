#include "classroom.h"
#include <iostream>
using namespace day_04::ex_01;

classroom::classroom(int idx)
{
	size = idx;
	students = new student[idx];
}

classroom::classroom(classroom const& c)
{
	size = c.size;
	students = new student[c.size];
	for (int i = 0; i < c.size; i++)
	{
		students[i] = c.students[i];
	}
}

classroom::~classroom()
{
	delete[] students;
}