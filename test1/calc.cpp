#include <iostream>
#include "calc.h"

int main()
{
    std::cout<<"3 + 2 = "<<add(3,2)<<std::endl;
    std::cout<<"3 - 2 = "<<sub(3,2)<<std::endl;
    std::cout<<"3 * 2 = "<<mult(3,2)<<std::endl;
    std::cout<<"3 / 2 = "<<divide(3,2)<<std::endl;

    return 0;
}
