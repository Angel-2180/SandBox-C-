// Exo4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Exo4.h"

int main()
{
    day_01::ex_04::test_enum x = day_01::ex_04::test_enum::my_name;
    day_01::ex_04::first_enum y = day_01::ex_04::first_enum::my_name;
    day_01::ex_04::second_enum z = day_01::ex_04::second_enum::my_name;

    std::cout << "Hello World!\n";
    std::cout << "int " << (int) x << std::endl;
    std::cout << "char " << (char)y << std::endl;
    std::cout << "uint " << (unsigned int)z << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
