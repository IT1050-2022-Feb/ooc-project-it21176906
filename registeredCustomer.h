//it21175220
#include "reservation.h"
#include "driver.h"


class registeredCustomer //the class
{
private: //access
	reservation* reserv;
	string customerName;
	int customerID; //attribute
	string customerAddress;
	driver *d;

public:
	registeredCustomer(string name, int id, string address); //constructor with parameters
	void addReservationDetails(reservation* reserv1);
	void displaycustomer(); //code to be executed
	~registeredCustomer();

};