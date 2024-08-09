#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  // ith row has n-i leading spaces
  // and i elements
  for(int i = 1; i <= n; i++)
  {
    // n-i leading spaces
    for(int j = 0; j < n - i; j++)
        cout<<" ";
       
    // i elements
    for(int j = 1; j <= i; j++)
      cout<<"* ";
    cout<<endl;
  }
  return 0;
}

