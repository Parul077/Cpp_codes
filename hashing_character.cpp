#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    // pre-compute
    // method 1
    int hash[26] = {0};
    // int hash[256] = {0};   for method 2
    for(int i=0;i<s.length();i++){
        hash[s[i] - 'a']++;
        // hash[s[i]]++;   for method 2
    }

    int q;
    cin>>q;
    
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout<<hash[c-'a']<<endl;
        // cout<<hash[c]<<endl;   for method 2
    }

    

    // input 
    // suowyhdbnhayeyqqaaa 6  a g o b q w 

    // output
   /*
   4
   0
   1
   1
   2
   1
   */


    return 0;
}