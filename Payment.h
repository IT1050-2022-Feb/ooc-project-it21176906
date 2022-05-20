//it21175220
class Payment //the class
{
private: //access
	int billNo;//variables
	string paymenttype;
	double amount;
public: 
	Payment(int pbillNo, string ptype, double pamount);
	void calAmount();//code to be executed
	void displayPayment();//code to be executed
	~Payment();//destructor
};