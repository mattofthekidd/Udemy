#include <iostream>
#include <string>
#include <sstream>
#include "Employee.hpp"

int main()
{
    Employee emp1("Jane Smith", 35000);
   // Employee emp2("Bill Brown", 32000);
    
    std::cout << emp1.toString() << std::endl;
    //std::cout << emp2.toString() << std::endl;
    
    
    return 0;
}