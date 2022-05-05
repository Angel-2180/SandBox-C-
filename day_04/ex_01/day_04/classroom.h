#pragma once
#include "student.h"

namespace day_04
{
	namespace ex_01
	{
		class classroom
		{
		public:
			//constructor && destructor
			classroom(int idx);
			classroom(classroom const& c);
			~classroom();

			//var
			int size;

			student* students;

			//operator overload
		};
	}
}