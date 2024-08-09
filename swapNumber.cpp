#include<iostream>
using namespace std;
//  int swapNumber(int arr[], int n)
//  {
//     int start = 0;
//     int end = n-1;
//     while(start<=end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//  }

 int swapAlternate(int arr[], int n)
 {
    for(int i=0;i<n;i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
 }

 int main()
 {
    int arr[20];
    cout<<"Enter elements in an array: "<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    // swapNumber(arr,6);
    swapAlternate(arr,6);
    cout<<"\nElements after swapping: "<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

 }