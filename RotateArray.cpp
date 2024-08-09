#include<iostream>
#include<vector>
using namespace std;
vector<int> rotate(vector<int>nums , int k)
{
    vector<int>temp(nums.size());
    for(int i=0;i<nums.size();i++)
    {
        temp[(i+k)%nums.size()]=nums[i];
    }
    nums=temp;
    return nums;
}
void printArray(vector<int> nums)
{
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(23);
    nums.push_back(17);
    nums.push_back(44);
    nums.push_back(12);
    nums.push_back(21);
     cout<<"Rotate array is: "<<endl;
    vector<int>ans=rotate(nums,2);
    printArray(ans);

}
