#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

//  for(int j=n;j>=1;j--)
//  {
//      cout<<j<<" ";
//  }
//  cout<<endl;

// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1
// 7 6 5 4 3 2 1 