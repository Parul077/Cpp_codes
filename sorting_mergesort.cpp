#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low,int mid, int high){
   
    int *temp = new int[high-low + 1];
    int left = low;
    int right = mid+1;
    int i=0;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i++] = arr[left];
            left++;
          
        }
        else{
            temp[i++] = arr[right];
            right++;
          
        }
    }
    while(left<=mid){
        temp[i++] = arr[left];
        left++;
       
    }
    while(right<=high){
        temp[i++] = arr[right];
        right++;
       
    }

    for(int i=low ;i<= high;i++){
        arr[i] = temp[i-low];
    }

    delete[] temp;

}
void mergeSort(int arr[], int l, int r) {
    if(l>=r) return;
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr, mid+1,r);
    merge(arr, l, mid, r);
    
}

int main()
{
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}