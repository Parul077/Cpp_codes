#include<bits/stdc++.h>
using namespace std;

int freqOfCharacter(string s){
    unordered_map<char, int>mp;

    for(char i:s){
        mp[i]++;
    }

    for(char i:s){
        if(mp[i] != 0){
            cout<<i<<mp[i]<<" ";
            mp[i] = 0;
        }
    }
}

int main()
{
    string str="abacaba";
    freqOfCharacter(str);
    return 0;
}