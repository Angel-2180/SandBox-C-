#pragma once

namespace day_01
{
	namespace ex_02
	{
		namespace box
		{
			int nb_little_boxes;

			typedef struct s_struct
			{
				enum candies
				{
					ORANGE,
					STRAWBERRY
				};
				
				candies candy;
				int nb_little_boxes = 23;
			
			} other_box;


			namespace little_box
			{
				int candies;

			}
		}
	}
}