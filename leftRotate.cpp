#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d){
    int mod = d%n;
    for(int i=0;i<n;i++){
        cout<<arr[(mod+i)%n]<<" ";
    }
}

int main()
{
    int arr[] = { 1, 3, 2, 4, 7, 6, 9, 10 };
	int n = sizeof(arr) / sizeof(int);

	// Function call
	leftRotate(arr, n, 2);
	return 0;

}