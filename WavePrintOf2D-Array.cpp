#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nrows,int mcols)
{
    vector<int> ans;
    for(int col=0;col<mcols ;col++)
    {
        if(col&1){    
            // odd index-> bottom to top
            for(int row=nrows-1;row>=0;row--)
            {
              //  cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // 0 or even -> top to bottom
            for(int row=0;row<nrows;row++)
            {
               // cout<<arr[row][col]<<" ";
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
void printArray(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>arr;
    vector<int>nrows;
    vector<int>mcols;
    nrows.push_back(3);
    mcols.push_back(3);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(11);
    arr.push_back(8);
    arr.push_back(41);
    vector<int>ans=wavePrint(arr,3,3);
    printArray(ans);
    return 0;
}
