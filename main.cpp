#include "Admin.h"
#include "driver.h"
#include "Payment.h"
#include "reservation.h"
#include "vehicle.h"
#include "registeredCustomer.h"
#include <iostream>
using namespace std;
int main()
{
//---- Object creation 
	reservation* rev = new reservation("Kamal", 001,"CEB123");
	registeredCustomer* cus = new registeredCustomer("Kamal", 12345,"Kamal@gmail.com",764146749, "pannipitiya");
	
	 Admin* adm=new Admin(001,"mihiru","mihiru@gmail.com",702);

  adm->diplayAdmin();
  cus->addReservationDetails(rev);
	rev->addPaymentdetails(101,"credit",12000);

	cus->displaycustomer();
	rev->displayPay();

  driver *dri=new driver(001,"hasitha","hasitha@gmail.com",76414523);
  dri->displayDriverDetails();

  delete dri;
	delete cus;
  delete adm;




 
 return 0;
}