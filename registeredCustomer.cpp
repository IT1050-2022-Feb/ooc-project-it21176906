//it21175220
#include <iostream>
#include <string>
#include "registeredCustomer.h"

using namespace std;

void registeredCustomer::addReservationDetails(reservation* reserv1)
{
	reserv = reserv1;
}

registeredCustomer::registeredCustomer(string name, int id, string address)
{
	customerName = name;
	customerID = id;
	customerAddress = address;
}

void registeredCustomer::displaycustomer()
{
	cout << "cutomer Name: " << customerName << endl;
	cout << "cutomer ID: " << customerID << endl;
	cout << "customer Address: " << customerAddress << endl;

	reserv->displayReservation();

}

registeredCustomer::~registeredCustomer()
{
	cout << "delete registered customer" << endl;
}