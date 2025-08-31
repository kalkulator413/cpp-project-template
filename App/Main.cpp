#include "calc/Calc.h"
#include <iostream>

int main()
{
    Calc calc;
    std::cout << "Hello World!" << std::endl;
    std::cout << "12+7 = " << calc.add(12, 7) << "\n";
    return 0;
}
