#include<bits/stdc++.h>
// #include<math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Method 1
    /*
    int ans  = 0;
    int i = 0;
    while(n != 0 ) {
        int bit  = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    */
   //Method 2
    int i = 0;
    int ans[32];
    while(n != 0){
        ans[i] = n % 2;
        n = n/2;
        i++;
   }
    for (int j = i - 1; j >= 0; j--) 
        cout << ans[j];
    cout<<endl;

    // int comp[32];
    // cout<<"1's Complement is: "<<endl;
    // for(int i=0;i<32;i++){
    //     if(ans[i]=='0'){
    //         comp[i]='1';
    //     }
    //     else{
    //         comp[i]='0';
    //     }
    // } 
    // for(int i=0;i<32;i++){
    //     cout<<comp[i];
    // }
    // cout<<endl;
    // int  com = ans[32]+ 1;
    // cout<<com<<endl;

    
   return 0;
}