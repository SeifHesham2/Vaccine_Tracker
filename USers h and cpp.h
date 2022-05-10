#pragma once
#include<string>
#include<iostream>
using namespace std;

class User
{
private:
	string nationalId;
	string password;
	string age;
	string fullName;
	string gender;
	string country;
	string governorate;
	bool admin;
	bool vaccinated;
	bool firstDose;
	bool secondDose;
	

public:

	User(string nationalId, string password,string fullName,string age, string gender, string country, string governorate);
	User(string nationalId, string password, string fullName);
	User(string nationalId);
	User();
	~User();
	bool GetFirstDose();
	bool GetSecondDose();
	string GetNationalId();
	string GetPassword();
	string GetFullName();
	string GetCountry();
	string GetGovernorate();
	string GetAge();
	string GetGender();
	void SetNationalId(string nationalId);
	void SetName(string name);
	void SetPassword(string password);
	void SetGender(string gender);
	void SetGovernorate(string governorate);
	void SetCountry(string Country);
	void SetAge(string age);
	void SetFirstDose(bool firstDose);
	void SetSecondDose(bool secondDose);
	void SetAdmin(bool admin);
	bool GetAdmin();
	friend bool operator< (const User& left, const User& right);
	friend bool operator== (const User& left, const User& right);

	



};

