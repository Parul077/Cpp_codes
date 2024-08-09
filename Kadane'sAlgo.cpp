#include<iostream>
using namespace std;
int kadaneAlgo(int arr[],int n){
    int curSum = 0;
    int maxSum = INT16_MIN;
    for (int i = 0;i <n ; i++) {
        curSum = curSum + arr[i];
        maxSum = max(maxSum,curSum);
        if(curSum < 0)
        curSum = 0;
    }
    return maxSum;
}

int main()
{
    int n=7;
   
    int arr[]={2,0,1,3,9,4,5};
   
    cout<<kadaneAlgo(arr , n)<<endl;
}