#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    string st = "eks";
     
    // finding first occurence
    size_t found = str.find(st);
    if (found!= string::npos){
        cout << "\n First occurence found at index: "<< found ;
    }
    else {
        cout<<"\nNot Found" ;
    }

    // finding next occurence
    found = str.find(st,found+1);
    if(found!= string::npos){
        cout << "\nNext Occurance found at index :"<< found;
    }
    return 0;

}

