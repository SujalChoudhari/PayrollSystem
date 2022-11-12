#pragma once

#include <vector>
#include "Employee.h"

class Manager
{
public:
	std::vector<Employee> employees;

public:
	Manager();
	void addEmployee(const Employee& employee);

	std::vector<Employee> getAll();
};

