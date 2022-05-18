#include "admin.h"
#include <iostream>
#include <cstring>

using namespace std;

void Admin::setAdminDetails(int id, const char name[], const char mail[], int number)
{
	AdminID = id;
	strcpy_(AdminName, name);
	strcpy_(Admin_Email, mail);
	AdminContactNo = number;
};

void Admin::displayDetails()
{
	
};
