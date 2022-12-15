/* Write a program that calculates and prints the monthly paycheck for an employee. The net pay is calculated after taking the following deductions:
Federal Income Tax: 15%
State Tax: 3.5%
Social Security Tax: 5.75%
Medicare/Medical Tax: 2.75%
Pension Plan: 5%
Health Insurance: $75.00
 
Bill Robinson
Gross Amount: ............ $3575.00
Federal Tax: ............. $ 536.25
State Tax: ............... $ 125.13
Social Security: ......... $ 205.56
Medicare/Medicaid Tax: ... $  98.31
Pension Plan: ............ $ 178.75
Health Insurance: ........ $  75.00
Net Pay: ................. $2356.00
 
Note that the first column is left-justified, and the right column is right-justified. */

/* The steps to solve the problem are:
•	Prompt the user to input the employee name (use getline() function).
•	Prompt the user to input the gross amount (double value).
•	Calculate the different deductions (Taxes). You need to declare a variable for each of these deductions.
•	Calculate the net pay after deducting the taxes from the gross amount. */

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
