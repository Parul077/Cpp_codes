#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    // iterate the map
    for(auto it:mp){
        cout<< it.first << " " << it.second << endl;
    }

    int number;
        cin>>number;
        // fetch
        cout<< hash[number] <<endl; 
        cout<<mp[number]<<endl;

    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     // fetch
    //     cout<< hash[number] <<endl; 
    //     cout<<mp[number]<<endl;
    // }

    // input
    // 5  1 3 2 1 3  5  1 4 2 8 12

    // output
    /*
      2
      0
      1
      0
      0
    */
    return 0;
}