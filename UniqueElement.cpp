#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
int findUnique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[11]={1,1,4,6,7,9,4,6,9,7,5};
    cout<<findUnique(arr,11)<<endl;
    //printarray(arr,9);
    return 0;
}