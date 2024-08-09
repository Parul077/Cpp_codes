#include<bits/stdc++.h>
using namespace std;

int distinctElement(int arr[], int n) {
    
    for(int i=0;i<n;i++){
         int count=0;
        for(int j=0;j<n;j++){
           if(arr[i]==arr[j])
           count++;
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }   
}

int main()
{
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	distinctElement(arr, n);
	return 0;
}



