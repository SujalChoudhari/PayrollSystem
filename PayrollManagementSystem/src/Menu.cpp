#include "Menu.h"
#include <iostream>
#include <string>


Menu::Menu()
{
	manager = Manager();
}

void Menu::mainMenu()
{
	std::string header = R"(
			=== Welcome to XYZ Company ===
			==============================

	[0] Exit
	[1] Add Employee
	[2] View All Employees

)";
	while (1) {
		system("cls");
		int choice;

		std::cout << header << "    [x] Enter Your Choice : ";
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			system("cls");
			std::cout << "You Decided to Exit" << std::endl;
			std::cout << "(Press Enter to Close)";
			std::cin.get();
			return;
		case 1:
			addEmployeeMenu();
			break;
		case 2:
			listAllEmployees();
			break;
		default:
			break;
		}
	}
}

void Menu::addEmployeeMenu()
{
	system("cls");
	int id;
	char grade;
	int long salary;
	std::string name;
	std::string dateOfBirth;
	std::string dateOfJoin;
	std::string city;
	int long moblieNumber;
	std::string designation;


	std::string header = R"(
			=== Welcome to XYZ Company ===
			====  Add Employee Menu   ==== 


	Fill out the Details:

)";

	std::cout<< header << "    [x] ID:";
	std::cin >> id;
	std::cout << std::endl;
	system("cls");

	std::cout << header << "    [x] Grade:";
	std::cin >> grade;
	std::cout << std::endl;
	system("cls");

	std::cout << header << "    [x] Salary:";
	std::cin >> salary;
	std::cout << std::endl;
	system("cls");
	
	std::cout << header << "    [x] Name:";
	std::cin >> name;
	std::cout << std::endl;
	system("cls");

	std::cout << header << "    [x] Date Of Birth:";
	std::cin >> dateOfBirth;
	std::cout << std::endl;
	system("cls");

	std::cout << header << "    [x] Date Of Join:";
	std::cin >> dateOfJoin;
	std::cout << std::endl;
	system("cls");

	std::cout << header << "    [x] City:";
	std::cin >> city;
	std::cout << std::endl;
	system("cls");

	std::cout << header << "    [x] Mobile Number:";
	std::cin >> moblieNumber;
	std::cout << std::endl;
	system("cls");

	std::cout << header << "    [x] Designation:";
	std::cin >> designation;
	std::cout << std::endl;
	system("cls");


	Employee e1(id, grade, salary, name, dateOfBirth, dateOfJoin, city, moblieNumber, designation);

	manager.addEmployee(e1);
}

void Menu::listAllEmployees()
{
	system("cls");
	std::string header = R"(
			=== Welcome to XYZ Company ===
			==== List Of All Employees ===

)";
	std::cout << header;
	std::cout << "ID	Grade	Salary	Name	DOB	DOJ	City	Mo.No	Desig." << std::endl;

	for (Employee e : manager.employees) {
		
		std::cout 
			<< e.getId() 	 << '\t'
			<< e.grade 		 << '\t'
			<< e.salary 	 << '\t'
			<< e.name 		 << '\t'
			<< e.dateOfBirth << '\t'
			<< e.dateOfJoin  << '\t'
			<< e.city 		 << '\t'
			<< e.moblieNumber<< '\t' 
			<< e.designation << '\t'
			<< std::endl;
	}

	std::cout << "    [x] Press Enter to Close ";
	std::cin.get();
	std::cin.get();
}
