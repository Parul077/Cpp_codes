#include<bits/stdc++.h>
using namespace std;

// vector<int> generateFibonacciNumbers(int n) {
//     vector<int> series{0,1};
//     if(n<=1) { 
//         series.pop_back();   
//     }
//     //Generating Series
//     for(int i=2;i<n;i++)
//     {
//         int curr=series[i-1]+series[i-2];
//         series.push_back(curr);
//     }
//     return series;
// }

// vector<int> generateFibonacciNumbers(int n){
//     vector<int> nums{0,1};
//     if(n==0){
//        nums.push_back(0);
//        return nums;
//     }
//     if (n==1){
//        nums.push_back(1);
//        return nums;
//     }
//     for(int i=2;i<n;i++){
//        int sum = nums[i-1]+nums[i-2];
//        nums.push_back(sum);
//     }

//     return nums;
    
// }


vector<int> generateFibonacciNumbers(int n){
    vector<int> nums{0,1};
    if(n==0){
       nums.pop_back();
       return nums;
    }
    if (n==1){
       nums.pop_back();
       return nums;
    }
    for(int i=2;i<n;i++){
       int sum = nums[i-1]+nums[i-2];
       nums.push_back(sum);
    }

    return nums;
    
}
int main()
{
    int n;
    cin>>n;
    for(auto i:generateFibonacciNumbers(n)){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}