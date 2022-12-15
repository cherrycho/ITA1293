#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double gross, federal, state, social, medical, pension, health, net;
	string name;
	
	cout << "Enter your name: " << endl;
	getline (cin, name);
 
	gross;
	cout << "Enter gross amount: " << endl;
	cin >> gross;
 
	cout << fixed << setprecision(2) << endl;
 
	cout << name << endl;
 
	cout << left << "Gross Amount: "<< right << setw(13) << setfill('.') << " $" << gross << endl;
 
	federal = gross*0.15;
	cout << "Federal Tax: " << right << setw(15) << setfill('.') << " $" << federal << endl;
 
	state = gross*0.035;
	cout << left << "State Tax: " << right << setw(17) << setfill('.') << " $" << state << endl;
 
	social = gross*0.0575;
	cout << left << "Social Security: " << right << setw(11) << setfill('.') << " $" << social << endl;
 
	medical = gross*0.0275;
	cout << left << "Medicare/Medicaid Tax: " << right << setw(6) << setfill('.') << " $" << medical << endl;
 
	pension = gross*0.05;
	cout << left << "Pension Plan: " << right << setw(14) << setfill('.') << " $" << pension << endl;
 
	health = 75;
	cout << left << "Health Insurance: " << right << setw(11) << setfill('.') << " $" << health << endl;
 
	net = gross-(federal+state+social+medical+pension+health);
	cout << left << "Net Pay: " << right << setw(18) << setfill('.') << " $" << net << endl;
 
	return 0;
}