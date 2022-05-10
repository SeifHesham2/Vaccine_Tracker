#include "User.h"
#include<string>
#include<cstring>
int User::counter = 0;
int User::maleCounter = 0;
int User::femaleCounter = 0;

User::User(string nationalId, string password, string fullName, string age, string gender, string country, string governorate)
{
	this->nationalId = nationalId;
	this->password = password;
	this->age = age;
	this->gender = gender;
	this->country = country;
	this->governorate = governorate;
	this->fullName = fullName;
	this->firstDose = false;
	this->secondDose = false;
	this->vaccinated = false;
	this->admin = false;
	
}

User::User(string nationalId, string password, string fullName)
{
	this->nationalId = nationalId;
	this->password = password;
	this->fullName = fullName;
}

User::User(string nationalId)
{
	this->nationalId = nationalId;
}

User::User()
{
}



User::~User()
{
	counter--;
}


bool User::GetFirstDose()
{
	return firstDose;
}
bool User::GetSecondDose()
{
	return secondDose;
}
string User::GetNationalId()
{
	return nationalId;
}

string User::GetPassword()
{
	return password;
}

string User::GetFullName()
{
	return fullName;
}

string User::GetCountry()
{
	return country;
}

string User::GetGovernorate()
{
	return governorate;
}

string User::GetAge()
{
	return age;
}

string User::GetGender()
{
	return gender;
}




void User::SetNationalId(string nationalId)
{
	this->nationalId = nationalId;
}

void User::SetName(string name)
{
	this->fullName = name;
}

void User::SetPassword(string password)
{
	this->password = password;
}

void User::SetGender(string gender)
{
	this->gender = gender;
}

void User::SetGovernorate(string governorate)
{
	this->governorate = governorate;
}

void User::SetCountry(string Country)
{
	this->country = country;
}

void User::SetAge(string age)
{
	this->age = age;
}

void User::SetFirstDose(bool firstDose)
{
	this->vaccinated = firstDose;
	this->firstDose = firstDose;
	
}

void User::SetSecondDose(bool secondDose)
{
	this->secondDose = secondDose;
}

void User::SetAdmin(bool admin)
{
	this->admin = admin;
}



bool User::GetAdmin()
{
	return admin;
}

