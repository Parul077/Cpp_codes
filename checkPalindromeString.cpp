#include<iostream>
using namespace std;

bool checkPalindrome(int i,string &s)
{
     if(i >= s.size()/2) return true;
     if(s[i] != s[s.size()-i-1]) return false;
     checkPalindrome(i+1,s);
   
}

int fibonacci(int i)
{
    if(i==0)
    return 0;

    if(i==1)
    return 1;

    return fibonacci(i-1)+fibonacci(i-2);
}

int main()
{
    string s = "noon";
    cout<<checkPalindrome(0,s);
    cout<<endl;
    cout<<fibonacci(8)<<" ";
    return 0;
}
