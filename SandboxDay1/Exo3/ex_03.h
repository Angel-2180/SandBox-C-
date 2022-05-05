#pragma once

namespace day_01
{
	namespace ex_03
	{
		int add(int q, int a)
		{
			return q + a;
		}


		float add(float a, float b)
		{
			return a + b;
		}

		double add(double a, double b)
		{
			return a + b;
		}

		unsigned int add(unsigned int a, unsigned int b)
		{
			return a + b;
		}

		double add(double b, unsigned int a = 0)
		{
			return a + b;
		}
	}
}
