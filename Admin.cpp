#include "admin.h"
#include <iostream>
#include <cstring>

using namespace std;

void Admin::setAdminDetails(int id, string name, string mail, int number,reservation *r,driver*d)
{
	AdminID = id;
	AdminName = name;
	Admin_Email = mail;
	AdminContactNo = number;
  rev=r;
  dr=d;
};

void Admin::displayDetails()
{
	cout << "Admin ID: " << AdminID << endl;
  cout << "Admin Name: " << AdminName << endl;
  cout << "E-mail: " << Admin_Email << endl;
  cout << "Contact Number: " << AdminContactNo << endl;

  rev->displayReservation();
  dr->displayDriverDetails();
};
