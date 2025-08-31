#include "calc/Calc.h"
#include <iostream>

constexpr int firstArg = 12;
constexpr int secondArg = 7;

int main()
{
    std::cout << "Hello World!\n";
    std::cout << firstArg << " + " << secondArg << " = "
	      << Calc::add(firstArg, secondArg) << "\n";
    return 0;
}
