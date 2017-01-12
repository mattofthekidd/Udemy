#include <string>
#include "Manager.hpp"

Manager::Manager(std::string name, double payRate, bool isSalaried) :
	Employee(name, payRate),
	m_salaried(isSalaried)
{
	
}

bool Manager::getSalaried() {
	return m_salaried;
}