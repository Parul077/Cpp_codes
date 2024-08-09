#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    cout<<"Top element of stack "<<s.top()<<endl;
    if(s.empty())
    {
        cout<<"Stack is empty "<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"Size of stack is "<<s.size();
    return 0;
}