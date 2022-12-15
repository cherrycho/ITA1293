/* 
l. Write C++ statements that produce the following output:

    Name: //output the value of the variable name
    Pay Rate: $ //output the value of the variable rate
    Hours Worked: //output the value of the variable //hoursWorked
    Salary: $ //output the value of the variable wages

For example, if the value of name is "Rainbow" and hoursWorked is
45.50, then the output is:

    Name: Rainbow
    Pay Rate: $12.50
    Hours Worked: 45.50
    Salary: $568.75

m. Write a C++ program that tests each of the C++ statements that you
wrote in parts a through l. Place the statements at the appropriate place
in the previous C++ program segment. Test run your program (twice)
on the following input data:

    a.  num1 = 13, num2 = 28; name = "Jacobson"; hoursWorked =
    48.30.
    b.  num1 = 32, num2 = 15; name = "Crawford"; hoursWorked =
    58.45. */

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
