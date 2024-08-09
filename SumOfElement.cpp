#include<iostream>
using namespace std;
int SumOfElement(int arr[],int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return arr[0];

    int remainingPart = SumOfElement(arr+1 , n-1);
    int sum= arr[0]+ remainingPart;
    return sum;
}
int main()
{
    int arr[5]={5,6,7,8,9};
    int size = 5;
    int sum= SumOfElement(arr,size);
    cout<<"Sum is "<<sum<<endl;
    return 0;
}