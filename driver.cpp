#include <iostream>
#include <cstring>
#include "driver.h"

using namespace std;

void driver::setDriverDetails(int id, char name[], char email[], int contact)
{
	dID = id;
	strcpy_(dName, name);
	strcpy_(dEmail, email);
	dContact = contact;
};

void driver::displayDriverDetails()
{

};