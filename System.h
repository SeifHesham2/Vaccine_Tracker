#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include<cstring>
#include<vector>
#include<set>
#include<string>
#include<cstring>
#include <mutex>
#include<queue>
#include <fstream>
#include<unordered_map>
#include"User.h"
using namespace std;
class System
{
private:
	string currentuser;
	unordered_map<string, User> umap;
	

public:
	

	System();
	~System();
	void Register();
	void Login();
	void DeleteInfo(string);
	void Display(string); 
	void Read();
	void Write();
	void Users_Fns(string);
	void Admins_Fns(string);
	void EditInfo(string);
	void Save();

	

	//void ViewAllUsers();
	//bool CheckAdmin(string nationalId);
};

