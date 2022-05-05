#pragma once

namespace day_01
{
    namespace ex_06
    {
        namespace __b
        {
            int a;
        }

        namespace __a
        {
            using namespace day_01::ex_06::__b;

            int b = a;
        }
    }
}