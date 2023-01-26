#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.1419;
double rectangle(double l,double w);
double circle(double r);
double cylinder(double bR,double h);

int main()
{
    double radius,height;
    int choice;
    
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"The program can calculate the area of a reactangle, "
        <<"the area of circle or volume of a cylinder"<<endl;
    cout<<"To run the program enter: "<<endl;
    cout<<"1: To find the area of rectangle. "<<endl;
    cout<<"2: To find the area of circle. "<<endl;
    cout<<"3: To find the area of cylinder. "<<endl;
    cout<<"-1: To terminate the program "<<endl;
    cin>>choice;
    cout<<endl;
    
    while(choice != -1){
        switch(choice){
            
        case 1:
                double length , width;
                cout<<"Enter the length and width of rectangle "<<endl;
                cin>>length>>width;
                cout<<endl;
                cout<<"Area = "<<rectangle(length,width)<<endl;
                break;
            
        case 2:
                cout<<"Enter the radius of circle"<<endl;
                cin>>radius;
                cout<<endl;
                cout<<"Area = "<<circle(radius)<<endl;
                break;
           
        case 3:
                cout<<"Enter the radius and height of cylinder"<<endl;
                cin>>radius>>height;
                cout<<endl;
                cout<<"Volume  = "<<cylinder(radius,height)<<endl;
                break;
                
        default :
                cout<<"Invalid choice"<<endl;
                
        }
            cout<<"To run the program enter: "<<endl;
            cout<<"1: To find the area of rectangle. "<<endl;
            cout<<"2: To find the area of circle. "<<endl;
            cout<<"3: To find the area of cylinder. "<<endl;
            cout<<"-1: To terminate the program "<<endl;
            cin>>choice;
            cout<<endl;

    }

    return 0;
}

 double rectangle(double l, double w){
        return l * w;
    }
    
    double circle(double r){
        return PI*r*r;//not w it should be r
    }
    
    
    double cylinder(double bR, double h){
        return PI*bR*bR*h;
    }
