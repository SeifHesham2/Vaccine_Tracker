#include <iostream>
#include "Vaccine.h"
#include<unordered_map>

using namespace std;
int main() {
	Vaccine v;
	int x;
	while (true) {
		cout << "If You Want To Register Press 1" << endl;
		cout << "If You Want To Login Press 2" << endl;
		cin >> x;
		if (x == 1) {
			v.insert();
		}
		else {
			v.login();
		}
	}
	return 0;
}