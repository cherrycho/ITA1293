#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int const SECRET = 11;
    double const RATE = 12.50;
    int num1, num2, newNum;
    string name;
    double hoursWorked, wages;

    cout << "Please input 2 numbers: ";
    cin >> num1 >> num2;
    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << endl;

    newNum = num1 * 2 + num2;
    cout << "newNum = " << newNum << endl;
    newNum += SECRET;
    cout << "newNum now = " << newNum << endl;

    cout << "Please enter your surname: ";
    cin >> name;
    cout << "Please enter the number of hours worked (0 - 70): ";
    cin >> hoursWorked;

    wages = hoursWorked * RATE;

    cout << fixed;
    cout << setprecision(2);

    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;

    return 0;
}