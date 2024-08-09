#include<iostream>
using namespace std;
int main()
{
    int n,upper=0,lower=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            upper++;
        }
        else{
            lower++;
        }
    }
    cout<<lower<<" "<<upper<<endl;
}