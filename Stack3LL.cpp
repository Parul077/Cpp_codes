#include<iostream>
#include<stack>
using namespace std;

class node{
    public:
    int data;
    node* next;
    int size;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
    void push(int data,node* &head)
    {
        node* p = new node(data);
        if(p!=NULL) {
            node* temp = new node(data);
            head->next = temp;
            head = temp;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(node* &head)
    {
        if(head!=NULL){
            ;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek()
    {
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack s(5);
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}