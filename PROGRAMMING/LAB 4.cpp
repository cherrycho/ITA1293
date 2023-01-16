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
}
