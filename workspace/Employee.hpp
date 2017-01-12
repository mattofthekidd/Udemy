#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

#include <sstream>
#include <string>

class Employee 
{
    public:
        Employee();
        Employee(std::string empName, double payRate);
        
        std::string getName();
        void setName(std::string empName);
        
        double getPay();
        void setPay(double payRate);
        
        std::string toString();
    private:
        std::string m_name;
        double m_pay;
};

#endif