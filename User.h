template <class T>
class User
{
	string name, password, country, governorate;
	long long ID;
	int age;
	char gender;
	bool vaccinated; //If vaccinated OR Not
	bool dose; //True for 1 dose, False for 2 doses 
	//int first, second, male, female; (Counters for percentages)

public:
	void Insert();
	void Display(int ID, string password);
	void EditInfo();
	void Delete();

};