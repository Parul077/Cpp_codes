#include<iostream>
using namespace std;
int findDuplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<"\t";
            }
        }
    }
    
}
int main()
{
    int arr[]={1,4,7,9,3,7,2,5,6,0,6};
    cout<<"Duplicate element is: ";
    findDuplicate(arr,11);
    return 0;

}