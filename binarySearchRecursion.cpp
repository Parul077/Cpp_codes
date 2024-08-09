#include<iostream>
using namespace std;
void print(int arr[], int s, int e)
{
    for(int i=s;i<e;i++)
    {
        cout<<arr[i]<<" ";
    }
      cout<<endl;
}
bool binarySearch(int arr[] , int s, int e, int k){
    cout<<endl;
    print(arr,s,e);
    if(s>e)
    return false;
     int mid = s+(e-s)/2;

     cout<<"Value of mid is "<<arr[mid]<<endl;

    if(arr[mid]==k)
    return true;
   
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[7]={1,3,6,8,9,31,76};
    int size = 5;
    bool ans= binarySearch(arr,0,6,76);
    if(ans){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }

}
