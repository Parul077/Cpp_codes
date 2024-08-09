#include<iostream>
using namespace std;

int largest(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = {1,6,8,33,5,9,2,0,71};
    int n;
    n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest in array is : "<<largest(arr,n);
    return 0;
}