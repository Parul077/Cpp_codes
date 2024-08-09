#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int d){
    int temp[n];;
    for(int i=0;i<n;i++){
        temp[(i+d)%n] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = { 1, 3, 2, 4, 7, 6, 9, 10 };
	int n = sizeof(arr) / sizeof(int);

	// Function call
	rotateArray(arr, n, 2);
	return 0;
}