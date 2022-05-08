#include <iostream>
#include <vector>
#include <unordered_map>
#include<fstream>
#include<stdio.h>
#include<queue>
#include <vector>
using namespace std;
class Vaccine
{
	
	
	long long age;
	char gender;
	string  natid,name, governorate, country, password ;
	bool Vaccinated, dose1=false , dose2=false;
	
	
	
public :
	static double cman, cwoman, cdose1, cdose2, counter;
	Vaccine();
	void login();
	void insert();
	void display(string,string);
	void edit(string ,string);
	void Delete(string ,string);
	void stat();
};

