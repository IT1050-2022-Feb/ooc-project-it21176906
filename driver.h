class driver
{
private:
	int dID;
	char dName[30];
	char dEmail[50];
	int dContact;

public:
	void setDriverDetails(int id, char name[], char email[], int contact);
	void displayDriverDetails();
};