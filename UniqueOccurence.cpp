#include<iostream>
using namespace std;
int UniqueOcuurence(int arr[],int n)
{
    bool check[n];
    for(int i=0;i<n;i++)
    {
        check[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(check[i]==1)
        {
            continue;
        }
        int count =1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                check[j]=1;
                count++;
            }
        }
        cout<<"unique occurence of "<<arr[i]<<" : "<<count<<endl;
    }
}
int main()
{
    int arr[]={1,8,6,0,7,9,6,4,1,7,7};
    cout<<"frequency of element"<<endl;
    UniqueOcuurence(arr,11);
    return 0;

}