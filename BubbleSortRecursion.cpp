#include<iostream>
using namespace std;
 void sortArray(int *arr , int size)
 {
    if(size==0 || size==1)
    {
        return ;
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }
    sortArray(arr,size-1);
 }

 int main()
 {
    int arr[5]= { 2,7,9,5,6};
    sortArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
 }