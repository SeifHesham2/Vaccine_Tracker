#include "System.h"
#include"User.h"
#include<iostream>
using namespace std;

void System::EditInfo(string id) {
	string newpassword;
	string choice , choice2;
	string newname;
	string newage;
	string newcountry, newgovernorate;
	string newvaccine;
	string newid;
	cout << "If You Want To Edit Your National ID Press 1" << endl;
	cout << "If You Want To Edit Your Password Press 2" << endl;
	cout << "If You Want To Edit Your Name Press 3 " << endl;
	cout << "If you Want To Edit Your Age Press 4" << endl;
	cout << "If You Want To Edit Your Country Press 5" << endl;
	cout << "If You Want To Edit Your Governorate Press 6" << endl;
	cout << "if you Want To Update Your Doses press 7" << endl;
	
	cin >> choice;
	if (choice == "1") {
		cout << "Enter Your National ID " << endl;
		cin >> newid;
		while (true) {
			if (umap.find(newid) != umap.end()) {
				cout << "This National ID Is Already Exist" << endl;
				cout << "If You Want To Enter New National ID Press 1" << endl;
				cout << "Enter Any Number to Go Back To the Edit List" << endl;
				cin >> choice2;
				if (choice2 == "1") {
					cout << "Enter Your New National ID " << endl;
					cin >> newid;
					
				}
				else {
					EditInfo(id);
					break;
								
				}
			}	
			else {
				User newuser(newid, umap.at(id).GetPassword(), umap.at(id).GetFullName(), umap.at(id).GetAge(), umap.at(id).GetGender(), umap.at(id).GetCountry(), umap.at(id).GetGovernorate(), umap.at(id).GetVaccinated(), umap.at(id).GetFirstDose(), umap.at(id).GetSecondDose());
				umap[newid] = newuser;
				umap.erase(id);
				break;
			     }
	        }
	}
	else if (choice == "2") {
		cout << "Enter Your New Password" << endl;
		cin >> newpassword;
		umap.at(id).SetPassword(newpassword);
		cout << "your operation is done successfully" << endl;
		EditInfo(id);
	}
	else if (choice == "3") {
		cout << "Enter Your New Name" << endl;
		getline(cin >> ws, newname);
		umap.at(id).SetName(newname);
		cout << "your operation is done successfully" << endl;
		EditInfo(id);
	}
	else if (choice == "4") {
		cout << "Enter Your New Age" << endl;
		cin >> newage;
		umap.at(id).SetAge(newage);
		cout << "your operation is done successfully" << endl;
		EditInfo(id);
	}
	else if (choice == "5") {
		cout << "Enter Your New Country" << endl;
		getline(cin >> ws, newcountry);
		umap.at(id).SetCountry(newcountry);
		cout << "your operation is done successfully" << endl;
		EditInfo(id);
	}
	else if (choice == "6") {
		cout << "Enter Your New Governorate" << endl;
		getline(cin >> ws, newgovernorate);
		umap.at(id).SetGovernorate(newgovernorate);
		cout << "your operation is done successfully" << endl;
		EditInfo(id);
	}
	else if (choice == "7") {
		cout << "Enter 1 if you have taken your first dose" << endl;
		cout << "Enter 2 if you have taken your second dose" << endl;
		cin >> newvaccine;
		if (newvaccine == "1") {
			umap.at(id).SetFirstDose(true);
			cout << "your operation is done successfully" << endl;
			EditInfo(id);

		}
		else if (newvaccine == "2") {
			umap.at(id).SetFirstDose(true);
			umap.at(id).SetSecondDose(true);
			cout << "your operation is done successfully" << endl;
			EditInfo(id);
		}
	}
}
void System::DeleteInfo(string id) {
	
	string choice;

	if (umap.find(id) != umap.end()) {
		
		cout << "Are You Sure Want To Delete?" << endl;
		cout << "If You Are Sure Press 1 If Not Press Any Number" << endl;
		if (choice == "1") {
			umap.erase(id);
		}
		else {
			//list fucntion;
		}


	}







}