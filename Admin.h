class admin
{
private:
	int AdminID;
	string AdminName;
	string Admin_Email;
	int AdminContactNo;
  reservation*rev;
  driver*dr;

public:
	void setAdminDetails(int id,string name,string mail,int number,reservation*r,driver*d);
	void displayDetails();

};