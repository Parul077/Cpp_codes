#include<iostream>
using namespace std;
bool checkPalindrom(string str,int i, int j)
{
    if(i>j)
    return true ;
    if(str[i] != str[j])
    return false;
    else{
        return checkPalindrom(str,i+1,j-1);
    }

}

int main()
{
    string name ="noon";
    cout<<endl;
    bool isPalindrom = checkPalindrom(name,0,name.length()-1);
    if(isPalindrom)
    {
        cout<<"Its a palindrom"<<endl;
    }
    else{
        cout<<"Its not a palindrom"<<endl;
    }
}

