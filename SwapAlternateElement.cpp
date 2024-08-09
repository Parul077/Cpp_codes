#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
void swapAlternate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
            i=i+1;
        }
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    cout<<"after swapping alternate element"<<endl;
    swapAlternate(arr,10);
    printarray(arr,10);
    return 0;
}
