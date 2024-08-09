#include<iostream>
using namespace std;
int firstOccurence(int arr[],int n,int key)
{
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s = mid-1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int n,int key)
{
    int s=0, e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s = mid-1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int even[8]={2,4,6,3,8,3,3,3};
    int odd[7]={3,8,9,5,9,9,9};
    cout<<"First occurence of 3 is at index is : "<<firstOccurence(even,8,3)<<endl;
    cout<<"Last occurence of 3 is at index is : "<<lastOccurence(even,8,3)<<endl;
     cout<<"First occurence of 9 is at index is : "<<firstOccurence(odd,7,9)<<endl;
    cout<<"Last occurence of 9 is at index is : "<<lastOccurence(odd,7,9)<<endl;
    return 0;
}


   