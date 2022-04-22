template <class T>
class User
{
	string name, password, country, governorate;
	long long ID;
	int age;
	char gender; //M for male, F for female
	bool vaccinated; //If vaccinated OR Not
	bool dose; //True for 1 dose, False for 2 doses 
	//int first, second, male, female; (Counters for percentages)

public:
	User(long long ID, string name, string password, char gender, string country, string governorate, bool vaccinated, bool dose);
	void Insert();
	void Display(int ID, string password);
	void EditInfo();
	void Delete();
	
	//Setters and getters
	void setName(string NAME)
	{
		name = NAME;
	}
	string getName()
	{
		return name;
	}

	void setPassword(string PASSWORD)
	{
		password = PASSWORD;
	}
	string getPassword()
	{
		return password;
	}

	void setCountry(string COUNTRY)
	{
		country = COUNTRY;
	}
	string getCountry()
	{
		return country;
	}

	void setGovernorate(string GOVERNORATE)
	{
		governorate = GOVERNORATE;
	}
	string getGovernorate()
	{
		return governorate;
	}

	void setID(string id)
	{
		ID = id;
	}
	long long getID()
	{
		return ID;
	}

	void setAge(string AGE)
	{
		age = AGE;
	}
	int getAge()
	{
		return age;
	}

	void setGender(string GENDER)
	{
		gender = GENDER;
	}
	char getGender()
	{
		return gender;
	}

	void setVaccinated(string VACCINATED)
	{
		vaccinated = VACCINATED;
	}
	bool getVaccinated()
	{
		return vaccinated;
	}

	void setDose(string DOSE)
	{
		dose = DOSE;
	}
	bool getDose()
	{
		return dose;
	}
};
