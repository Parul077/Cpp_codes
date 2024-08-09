#include<iostream>
using namespace std;

// Row wise sum
void printsumRow(int arr[3][3],int row,int col)
{
    for(int row=0;row<3;row++)
    {
         int sum=0;
        for(int col=0;col<3;col++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}

// column wise sum

void printsumColumn(int arr[3][3],int row,int col)
{
    for(int col=0;col<3;col++)
    {
         int sum=0;
        for(int row=0;row<3;row++)
        {
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
}
int main()
{
    int arr[3][3];
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
     for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Row wise sum ";
    printsumRow(arr,3,3);
    cout<<endl;
     cout<<"Column wise sum ";
    printsumColumn(arr,3,3);
    return 0;
}    