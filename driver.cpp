#include <iostream>
#include <cstring>
#include "driver.h"

using namespace std;

void driver::setDriverDetails(int id, string name, string email, int contact)
{
	dID = id;
	dName=name;
	dEmail=email;
	dContact = contact;
};

void driver::displayDriverDetails()
{

};