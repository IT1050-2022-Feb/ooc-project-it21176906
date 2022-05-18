class admin
{
private:
	int AdminID;
	char AdminName[30];
	char Admin_Email[50];
	int AdminContactNo;

public:
	void setAdminDetails(int id,const char name[],const char mail[],int number);
	void displayDetails();

};