#include <iostream>


using namespace std;
int main()
{
    int diff,n;
    for(int n=0; n<5; n++){
    cout<<"Enter an integer greater than or equal to 0 and less than 100: ";
    cin>>diff;
    if(diff==0)
    {
       cout<<"Congratulations, You guessed the correct number."<<endl;
    }
    else if(diff>=50)
    {
        cout<<"Your guess is very high than the number"<<endl;
    }
    else if(diff>=30 && diff<50)
    {
      cout<<"Your guess is higher than the number"<<endl;
    }
    else if(diff>=15 && diff<30)
    {
     cout<<"Your guess is is moderately higher than the number"<<endl;
    }
    else if(diff>0 && diff<15)
    {
       cout<<"Your guess is is somewhat higher than the number"<<endl;
    }
    else
    {
       cout<<"No more attempts left."<<endl;
    }
    }
    	return 0;
}
}
/* BASE CODING

#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	srand ((unsigned int) time(NULL));
	int num;
	int num2 = 1 + rand() % 100;

	cout << "This program is a random guessing game.\n\n";

	do
	{
		cout << "Enter an integer greater than or equal to 0 and less than 100: ";
		cin >> num;

		if ( num < num2 )
		{
			cout << "Your guess is lower than the number." << endl;
			cout << "Guess again!" << endl;

		}
		else if ( num > num2 )
		{
			cout << "Your guess is higher than the number." << endl;
			cout << "Guess again!" << endl;
		}
		else if ( num == num2 )
		{
		  cout << "Congratulations, You guessed the correct number." << endl;
		}
	} while (num != num2);
	
	getch();

	return 0;
}

*/
