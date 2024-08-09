#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPerfect(long long int x){
    if(x>=0)
    {
        int sr = sqrt(x);
        return (sr *sr == x);
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPerfect(n)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}