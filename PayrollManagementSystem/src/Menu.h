#pragma once

#include "Manager.h"
class Menu
{
public:
	Manager manager;
	Menu();
	void mainMenu();
	void addEmployeeMenu();
	void listAllEmployees();
};

