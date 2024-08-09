#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start, int end){

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void rotateLeft(int arr[], int n, int d){

    if(d==0){
        return ;
    }
    d = d%n;
    reverseArray(arr,0,d-1);
    reverseArray(arr,d,n-1);
    reverseArray(arr,0,n-1);

}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = { 1, 3, 2, 4, 7, 6, 9, 10 };
	int n = sizeof(arr) / sizeof(int);

	// Function call
    printArray(arr,n);
    cout<<endl;
	rotateLeft(arr, n, 2);
    printArray(arr,n);
	return 0;
}