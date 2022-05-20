//it21176456
class reservation//reservation class //whole class for payment class
{
private:
	string reserveName;
	int reserveId;
	string vehicleID;
	Payment* amount;

public:
	
	reservation(string name, int ID,string vehID);
	~reservation();//destructor
	void displayReservation();
	void addPaymentdetails(int paybillNo,string paytype,double payamount);
	void displayPay();
};