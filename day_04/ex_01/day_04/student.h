#pragma once

namespace day_04
{
	namespace ex_01
	{
		class student
		{
		public:
			//constructor && destructor
			student();
			~student();

			//var
			int i;

			//operator overload
			student const& operator=(student const& m_student);
		};
	}
}