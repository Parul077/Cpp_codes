#include <iostream>
using namespace std;
int main()
{
    int n,temp,min;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j]){
                min=j;
            }
        }
         temp=arr[i];
         arr[i]=arr[min];
         arr[min]=temp;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
    
} 