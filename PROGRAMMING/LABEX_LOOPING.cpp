#include <iostream>
#include<string>

using namespace std;

void timeOnJob2(int arvHr, int arvMin, bool arvIsAM, int depHr, int depMin, bool depIsAM);

int main()
{
string employeeName;
int arrivalHr;
int arrivalMin;

int departureHr;
int departureMin;
bool arrivalAM;
bool departureAM;


char response;
char discard;
char isAM;

cout << "This program calculates the total time spent by an "
<< "employee on the job." <<endl;
cout << "To run the program, enter (y/Y): ";
cin >> response;
cout << endl;
cin.get(discard);

while (response =='y' || response == 'Y')
{
cout << "Enter employee's name: ";
getline(cin, employeeName);
cout << endl;

cout << "Enter arrival hour: ";
cin >> arrivalHr;
cout << endl;
cout << "Enter arrival minute: ";
cin >> arrivalMin;
cout << endl;
cout << "Enter (y/Y) if arrival is before 12:00PM: ";
cin >> isAM;
cout << endl;

if (isAM == 'y' || isAM == 'Y')
    arrivalAM = true;

else
    arrivalAM = false;

cout << "Enter departure hour: ";
cin >> departureHr;
cout << endl;
cout << "Enter departure minute: ";
cin >> departureMin;
cout << endl;
cout << "Enter (y/Y) if departure is before 12:00PM: ";
cin >> isAM;
cout << endl;

if (isAM == 'y' || isAM == 'Y')
departureAM = true;
else
departureAM = false;

cout<< employeeName << endl;
timeOnJob2(arrivalHr, arrivalMin, arrivalAM, departureHr, departureMin, departureAM);

cout << "Run program again (y/Y): ";
cin >> response;
cout << endl;
cin.get(discard);
}

return 0;
}
void timeOnJob2(int arvHr, int arvMin, bool arvIsAM, int depHr, int depMin, bool depIsAM)
{
    int arvTimeInMin;
    int depTimeInMin;
    int timeOnJob2InMin;

    if ((arvIsAM == true && depIsAM == true)|| (arvIsAM == false && depIsAM == false))
    {
    cout << "Invalid input." << endl;
    }

    else if (arvIsAM == true && depIsAM == false)
    {
    arvTimeInMin = arvHr * 60 + arvMin;
    depTimeInMin = depHr * 60 + depMin;
    timeOnJob2InMin = (720 - arvTimeInMin) + depTimeInMin;
    cout << "Time spent of job: "
    << timeOnJob2InMin / 60 << " hour(s) and "
    << timeOnJob2InMin % 60 << " minutes." << endl;
    }
    else
        if (arvTimeInMin <= depTimeInMin)
        {
        timeOnJob2InMin = depTimeInMin - arvTimeInMin;
        cout << "Time spent of job: "
        << timeOnJob2InMin / 60 << " hour(s) and "
        << timeOnJob2InMin % 60 << " minutes." << endl;
        }
        else
        cout << "Invalid input." << endl;

}
