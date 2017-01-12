#include <iostream>
#include <sstream>
#include <string>
#include "Employee.hpp"

Employee::Employee() : 
    m_name(" "),
    m_pay(0)
{
    
}

Employee::Employee(std::string empName, double payRate) :
    m_name(empName),
    m_pay(payRate)
{
    
}

std::string Employee::getName() {
    return m_name;
}

void Employee::setName(std::string empName) {
    m_name = empName;
}

double Employee::getPay() {
    return m_pay;
}

void Employee::setPay(double payRate) {
    m_pay = payRate;
}

std::string Employee::toString() {
    std::stringstream stm;
    stm << m_name << ": " << m_pay;
    return stm.str();
}