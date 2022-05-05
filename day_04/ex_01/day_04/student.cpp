#pragma once
#include "student.h"
#include <iostream>

using namespace day_04::ex_01;
int n = 0;
student::student()
{
	this->i = n;
	std::cout << "student " << n << " created" << std::endl;
	n++;
}

student::~student()
{
	std::cout << "student " << this->i << " destroyed" << std::endl;
}

student const& student::operator=(student const& m_student)
{
	std::cout << "student " << this->i << " become " << m_student.i << std::endl;
	this->i = m_student.i;

	return *this;
}