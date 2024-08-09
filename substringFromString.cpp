#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"The substrings are: "<<endl;
    for(int i=0;i<str.size();i++){
        string temp;
        for(int j=i;j<str.size();j++){
            temp.push_back(str[j]);
            cout<<temp<<endl;
        }
    }

    return 0;
}