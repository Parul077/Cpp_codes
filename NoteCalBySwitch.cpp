#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the amount to calculate how may 100's, 50's, 20's and 1's notes will be used: "<<endl;
    cin>>n;
    int a,b,c,d;

    int num ;
    cin>>num;

    switch(num)
    {
        
        case 100:  a = n/num;
        cout<<"Number of 100's : "<<a;
        break;

        case 50:  b = n-a*num;
        cout<<"Number of 50's : "<<b/num;
        break;

        case 20:  c  = b - (b/num);
        cout<<"\nNumber of 20's : "<<c/num;
        break;

        case 1:  d = c -  (c/num);
        cout<<"Number of 1's : "<<d;
        break;

        default:
        cout<<"Invalid case";

    }

}