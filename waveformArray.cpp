#include<bits/stdc++.h>
using namespace std;

void sortWave(int arr[], int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i=i+2){
        swap(arr[i],arr[i+1]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10, 5, 6, 3, 2, 20, 100, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortWave(arr,n);
}