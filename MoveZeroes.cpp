#include<iostream>
#include<vector>
using namespace std;
vector<int> movezeroes(vector<int> nums)
{
    int i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=0)
        {
            swap(nums[j],nums[i]);
            i++;
        }
    }
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
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(11);
    nums.push_back(0);
    nums.push_back(8);
    nums.push_back(41);
    vector<int>ans=movezeroes(nums);
    printArray(ans);
    return 0;
}
