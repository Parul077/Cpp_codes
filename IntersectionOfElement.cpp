#include<iostream>
using namespace std;
int i=0,j=0;
int ans;
//vector<int>ans;
int intersection(int arr,int brr,int n){
while(i<n && j<=n)
{
    if(arr[i]==brr[j])
    {
        ans.push_back(arr[i]);
        i++;
        j++;
    }
    else if(arr[i]<brr[j])
    {
        i++;
    }
    else{
        j++;
    }
    return ans;
}
}
int main()
{
    int arr[]={1,3,2,6,4,8,9,3,5,7};
    int brr[]={1,3,6,7,3,8,9,0,5,7};
    cout<<intersection(arr,brr,10);
    return 0;

}