#ifndef _MANAGER_HPP_
#define _MANAGER_HPP_

#include "Employee.hpp"

class Manager : public Employee {
	public:
		Manager(std::string name, double payRate, bool isSalaried);
		
		bool getSalaried();
		
	private:
		bool m_salaried;
};

#endif