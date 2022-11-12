#include "Manager.h"
#include <iostream>


Manager::Manager()
{
	employees.reserve(5);
}

void Manager::addEmployee(const Employee& employee)
{
	employees.push_back(employee);
}


std::vector<Employee> Manager::getAll()
{
	return std::vector<Employee>();
}
