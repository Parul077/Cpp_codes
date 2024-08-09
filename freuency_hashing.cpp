#include<bits/stdc++.h>
#include<vector>

using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        if(nums[i]<=x){
            arr[nums[i]-1]++;
        }    
    }
   return arr;
    
}
int main()
{
    int n = 6;
    int x = 4;
    vector<int> arr{1, 3, 4, 3, 4, 1};
    //cin>>n;
    for(auto i:countFrequency(n,x,arr)){
        cout<<i<<" ";
    }
 
    return 0;

}
