#include<bits/stdc++.h>
using namespace std;

int possibleTriangle(int arr[], int n){
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if((arr[i] + arr[j]) > arr[k] && (arr[i] + arr[k]) > arr[j] && (arr[k] + arr[j]) > arr[i])
                count++;
            }
        }
    }
    cout<<count;
    //return count;
}


int main()
{
    int arr[] = {4, 6, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    possibleTriangle(arr, n);

}