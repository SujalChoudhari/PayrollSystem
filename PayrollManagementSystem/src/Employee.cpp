#include <iostream>
#include "Employee.h"




Employee::Employee(int id, char grade, int long salary,
	std::string name, std::string dob, std::string doj,
	std::string city, int long mobile, std::string designation):
	m_Id		(id),
	grade		(grade),
	salary	(salary),
	name		(name),
	dateOfBirth	(dob),
	dateOfJoin	(doj),
	city		(city),
	moblieNumber(mobile),
	designation	(designation) {}

int Employee::getId() const
{
	return m_Id;
}

