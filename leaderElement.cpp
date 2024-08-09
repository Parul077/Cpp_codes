#include<bits/stdc++.h>
using namespace std;
/*
void leaderElement(int arr[], int n)
{
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[i]<=arr[j])
            break;
        }

        if(j==n)
        cout<<arr[i]<<" ";

    }
}
*/

void leaderElement(int arr[], int n){
    int right = arr[n-1];
    cout<<right<<" ";

    for(int i=n-2;i>=0;i--){
        if(right< arr[i]){
            right = arr[i];

            cout<<right<<" ";

        }
    }
}
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	leaderElement(arr, n);
	return 0;
}
