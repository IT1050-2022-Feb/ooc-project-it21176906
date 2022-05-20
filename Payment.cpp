//it21175220
#include <iostream>
#include <string>
#include "Payment.h"

Payment::Payment(int pbillNo, string ptype, double pamount)
{
	billNo = pbillNo;
	paymenttype = ptype;
	amount = pamount;
}

void Payment::calAmount()
{

}
void Payment::displayPayment()
{
	cout << "bill No: " << billNo << "\n" << "payment type: " << paymenttype << "\n" << "Amount: " << amount << endl;
}
Payment::~Payment()
{
	cout << "delete billNo: " << billNo << endl;
}