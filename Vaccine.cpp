#include "Vaccine.h"
#include<stdio.h>
#include <iterator>
#include<unordered_map>
#include<fstream>
#include <string.h>
#include<string>
#include<iostream>
#include "WaitingList.cpp"
using namespace std;
Vaccine::Vaccine() {
}
unordered_map <string, Vaccine> m;
WaitingList <Vaccine> w;
double Vaccine::cman = 0;
double Vaccine::cwoman = 0;
double Vaccine::cdose1 = 0;
double Vaccine::cdose2 = 0;
double Vaccine::counter = 0;

void Vaccine::login() {
	string pass, id;
	int x;
	cout << "Enter Your Nationality id" << endl;
	cin >> id;
	cout << "Enter Your Password" << endl;
	cin >> pass;
	if (pass != "Admin1") {
		if (m.find(id) != m.end()) {
			if (m.at(id).password == pass) {
				while (true) {		
					cout << "To Display Your Data Press 1" << endl;
					cout << "To Edit press 2" << endl;
					cout << "TO Delete press 3" << endl;
					cout << "To Exit Press 4" << endl;
					cin >> x;
					
					 if (x == 1) {
						display(id,pass);
					}
					else if (x == 2) {
						edit(id,pass);
					}
					else if (x == 3) {
						 Delete(id, pass);
					 }
					else if (x == 4) {
						break;
					}
				}

			}
			else {
				cout << "wrong password" << endl;
			}
		}
		else {
			cout << "you are not registerd yet" << endl;

		}

	}
	else {
		int z;

		if (m.find(id) != m.end()) {
			if (m.at(id).password == pass) {
				cout << "you are logged in as a admin" << endl;
				while (true) {
					cout << "if you want to display citzine records press 1" << endl;
					cout << "if you want to delete citzine records press 2" << endl;
					cout << "if you want to view system statistics press 3" << endl;
					cout << "if you want to logout press 4" << endl;
					cin >> z;
					if (z == 1) {
						display(id, pass);
					}
					else if (z == 2) {
						Delete(id, pass);
					}
					else if (z == 3) {
						stat();
					}
					else if (z == 4) {
						break;
					}
				}
			

			}
			else{
				cout << "worng password" << endl;
			}

		}
		else {
			cout << "you are not registerd yet" << endl;
		}
	}
}

 void Vaccine::insert() {
	 Vaccine c;
	
	 int x, numberofdoses;
	 int vcheck;
	 string password2;
	 cout << "Enter Your Nationality ID" << endl;
	 cin >> c.natid;
	 while(c.natid.size()!=14){
		 cout << "invalid Nationality ID" << endl;
		 cout << "Enter Your Nationality ID" << endl;
	 cin >> c.natid;
	 }
	 cout << "Enter Your Name" << endl;
	 getline(cin >> ws ,c.name);  //name with space
	 cout << "Enter Your Password" << endl;
	 cin >> c.password;
	 cout << "confirm your password" << endl;
	 cin >> password2;
	 while (c.password != password2) {
		 cout << "invalid confirmation  " << endl;
		 cout << "Enter your password" << endl;
		 cin >> c.password;                                 //passwordconfrimation
		 cout << "confirm your password" << endl;
		 cin >> password2;
	 }
	 cout << "Enter Your age" << endl;
	 cin >> c.age;
	 cout << "Enter your Gender M or F" << endl;
	 cin >> c.gender;
	 
	 cout << "Enter Your country" << endl;
	 cin >> c.country;
	 while(true) {
		 cout << "Enter Your governorate" << endl;
		
		 getline(cin >> ws, c.governorate);
		 
		
		 for (int i = 0; i < c.governorate.size(); i++) {
			 if(isupper(c.governorate[i]))
			 c.governorate[i] = c.governorate[i] + 32;  //change cap to small
		 }
		 if ((c.governorate == "cairo") || (c.governorate == "aswan") || (c.governorate == "alexandria") || (c.governorate == "asyut") || (c.governorate == "beheria") || (c.governorate == "dakahlia") || (c.governorate == "damietta") || (c.governorate == "faiyum") || (c.governorate == "gharbia") || (c.governorate == "giza") || (c.governorate == "ismailia") || (c.governorate == "minya") || (c.governorate == "luxor") || (c.governorate == "matruh") || (c.governorate == "minya") || (c.governorate == "mounfia") || (c.governorate == "qalyubia") || (c.governorate == "qena") || (c.governorate == "sharqia") || (c.governorate == "sohag") || (c.governorate == "suez") || (c.governorate == "beni suef") || (c.governorate == "kafr el sheikh") || (c.governorate == "new valley") || (c.governorate == "north sinai") || (c.governorate == "port said") || (c.governorate == "red sea") || (c.governorate == "south sinai")) {
			 break; // all cities of egypt
		 }
		 else {
			 cout << "Invalid governorate" << endl;
			
		 }
	 }

	 cout << "are you Vaccinated" << endl;
	 cout <<  "if Vaccinated press 1 if not press 2 " << endl;
	 cin >> vcheck;
	 if (vcheck == 1) {
	 c.Vaccinated = true;
	 }
	 else {
	 c.Vaccinated = false;
	 }
	 
	 if(c.Vaccinated==true){
		 cout << "which  dose you have taken" << endl;
		 cout << "if first dose press 1 if second dose press 2" << endl;
		 cin >> numberofdoses;
		 if (numberofdoses == 1) {
			 c.dose1 = true;
			 c.dose2 = false;
			
		 }
		 else {
			 c.dose1 = true;
			 c.dose2 = true;
			
		 }

	 }
	 if (m.find(c.natid) != m.end()) {
		 cout << "You Are registerd before" << endl;
	 }
	 else {
		 
		 m[c.natid] = c;
		 if (c.Vaccinated == false) {
			 cout << "you are  successfulyy added To the WaitingList and registered "<< endl;
			 w.enqueue(c);
		 }
		 else {
			 cout << "you are successfully registered" << endl;
		 }		 counter++;
		 if (c.gender == 'M' || c.gender == 'm') {
			 c.cman++;
		 }
		 else {
			 c.cwoman++;
		 }
		 if (c.dose2 == true) {                              // counters to stat
			 c.cdose2++;
			 c.cdose1++;
		 }
		 else if (c.dose2 == false && c.dose1==true) {
			 c.cdose1++;
		 }
	
		 }
	
}


 void Vaccine::display(string id, string passs) {
	 string idd;
	 if (m.at(id).password != "Admin1") {
		 cout << "your  Nationality ID is" << ' ' << ':' << ' ' << m.at(id).natid << endl;
		 cout << "your name is" << ' ' << ':' << ' ' << m.at(id).name << endl;
		 cout << "your age is" << ' ' << ':' << ' ' << m.at(id).age << endl;
		 cout << "your country is" << ' ' << ':' << ' ' << m.at(id).country << endl;
		 cout << "your governorate  is" << ' ' << ':' << ' ' << m.at(id).governorate << endl;
		 if (m.at(id).gender == 'm' || m.at(id).gender == 'M') {
			 cout << "your gender  is" << ' ' << ':' << ' ' << "Male" << endl;
		 }
		 else {
			 cout << "your gender  is" << ' ' << ':' << ' ' << "Female" << endl;
		 }
		 if (m.at(id).Vaccinated == true) {
			 cout << "you are Vaccinated" << ' ' << endl;
			 if (m.at(id).dose1 = true && m.at(id).dose2 == false) {
				 cout << "you have taken the first dose only" << endl;
			 }                                                                   //number of doses
			 if (m.at(id).dose1 = true && m.at(id).dose2 == true) {
				 cout << "you have taken both doses" << endl;
			 }
		 }
		 else {
			 cout << "you are not Vaccinated" << endl;
		 }

	 }

	 else {
		 cout << "Enter Nationality id" << endl;
		 cin >> idd;

		 cout << "citizen  Nationality ID is" << ' ' << ':' << ' ' << m.at(idd).natid << endl;
		 cout << "citizen name is" << ' ' << ':' << ' ' << m.at(idd).name << endl;
		 cout << "citizen age is" << ' ' << ':' << ' ' << m.at(idd).age << endl;
		 cout << "citizen country is" << ' ' << ':' << ' ' << m.at(idd).country << endl;
		 cout << "citizen governorate  is" << ' ' << ':' << ' ' << m.at(idd).governorate << endl;
		 if (m.at(idd).gender == 'm' || m.at(idd).gender == 'M') {
			 cout << "citizen gender  is" << ' ' << ':' << ' ' << "Male" << endl;
		 }
		 else {
			 cout << "citizen gender  is" << ' ' << ':' << ' ' << "Female" << endl;
		 }
		 if (m.at(idd).Vaccinated == true) {
			 cout << "citizen are Vaccinated" << ' ' << endl;
			 if (m.at(idd).dose1 = true && m.at(idd).dose2 == false) {
				 cout << "citizen have taken the first dose only" << endl;
			 }                                                                   //number of doses
			 if (m.at(idd).dose1 = true && m.at(idd).dose2 == true) {
				 cout << "citizen have taken both doses" << endl;
			 }
		 }
		 else {
			 cout << "citizen are not Vaccinated" << endl;
		 }

	 }



 }

 


 void Vaccine::edit(string id , string pass) {
	 long long  newage;
	 int choice;
	 string newname, z, newcountry;


	 cout << "if you want to edit your password press 1" << endl;
	 cout << "if you want to edit your name press 2" << endl;
	 cout << "if you want to edit your age press 3" << endl;
	 cout << "if you want to edit your country press 4" << endl;
	 cin >> choice;
	 if (choice == 1) {
		 cout << "enter your new password" << endl;
		 cin >> z;
		 m.at(id).password = z;
	 }
	 else if (choice == 2) {
		 cout << "Enter Your new name" << endl;
		 getline(cin >> ws, newname);
		 m.at(id).name = newname;
	 }
	 else  if (choice == 3) {
		 cout << "enter your new age" << endl;
		 cin >> newage;
		 m.at(id).age = newage;
	 }
	 else if (choice == 4) {
		 cout << "Enter your new country";
		 cin >> newcountry;
		 m.at(id).country = newcountry;
	 }

 }
	
 

void Vaccine::Delete(string id , string pass) {
	string idd;
	if (m.at(id).password != "Admin1") {
		while (true) {

			if (m.at(id).dose1 == true && m.at(id).cdose2 == false) {
				cdose1--;
			}
			else if (m.at(id).cdose2 == true) {
				cdose2--;
			}
			if (m.at(id).gender == 'M' || m.at(id).gender == 'm') {
				cman--;
			}
			else {
				cwoman--;
			}
			m.erase(id);
			counter--;

			break;
		}
	}
	else {
		cout << "Enter the  Nationality id" << endl;
		cin >> idd;
		while (true) {

			if (m.at(idd).dose1 == true && m.at(idd).cdose2 == false) {
				cdose1--;
			}
			else if (m.at(id).cdose2 == true) {
				cdose2--;
				cdose1--;
			}
			if (m.at(idd).gender == 'M' || m.at(idd).gender == 'm') {
				cman--;
			}
			else {
				cwoman--;
			}
			m.erase(idd);
			counter--;

			break;
		}





	}
 }




void Vaccine::stat() {
	double calc1, calc2, calc3, calc4;
	calc1 = 100*(cman / counter);
	calc2 = 100*(cwoman / counter);
	calc3 = 100 * (cdose1 / counter);
	calc4 = 100 * (cdose2 / counter);
	cout << "Number of men Registered" << ' ' << ':' << ' ' << cman << endl;
	cout << "Number of women Registered" << ' ' << ':' << ' ' << cwoman << endl;
	cout << "precentagte of men Registered" << ' ' << ':' << ' ' << calc1 << '%' <<  endl;
	cout << "precentagte of women Registered" << ' ' << ':' << ' ' << calc2 << '%' << endl;
	cout << "precentagte of who took first dose " << ' ' << ':' << ' ' << calc3 << '%' << endl;
	cout << "precentagte of who took second dose " << ' ' << ':' << ' ' << calc4 << '%' << endl;

}