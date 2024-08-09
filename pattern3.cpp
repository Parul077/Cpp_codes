#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements you want in array: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>=1;k--){
            cout<<" "<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        int start=i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }
}

//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 