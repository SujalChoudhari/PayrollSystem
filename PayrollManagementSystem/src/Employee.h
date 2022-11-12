#pragma once
#include <string>

struct Employee
{
private:
	const int m_Id;
public:
	char grade;
	int long salary;
	std::string name;
	std::string dateOfBirth;
	std::string dateOfJoin;
	std::string city;
	int long moblieNumber;
	std::string designation;

public:
	
	Employee(int id, char grade, int long salary,
		std::string name, std::string dob, std::string doj,
		std::string city, int long mobile, std::string designation);
	

	int getId() const;
};

