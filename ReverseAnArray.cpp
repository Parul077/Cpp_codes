#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[6]={1,3,5,7,9,-8};
    int brr[7]={-1,7,3,9,-3,4,5};
    reverse(arr,6);
    reverse(brr,7);
    cout<<"after reversing an array 1"<<endl;
    printarray(arr,6);
    cout<<endl;
    cout<<"after reversing an array 2"<<endl;
    printarray(brr,7);
    return 0;

}