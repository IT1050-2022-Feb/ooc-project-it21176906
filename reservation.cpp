//it21176456
#include<iostream>
#include<cstring>
#include "reservation.h"
using namespace std;

reservation::reservation(string name, int ID,string vehID)
{
	reserveName = name;
	reserveId = ID;
	vehicleID = vehID;
}

reservation::~reservation()
{
	cout << "delete reservation" << endl;
	delete amount;
}

void reservation::displayReservation()
{
	cout << "reservation name: " << reserveName << endl;
	cout << "reservation ID: " << reserveId << endl;
}
void reservation::addPaymentdetails(int paybillNo, string paytype, double payamount)
{
	amount =new Payment(paybillNo,paytype,payamount);
}
void reservation::displayPay()
{
	amount->displayPayment();
}