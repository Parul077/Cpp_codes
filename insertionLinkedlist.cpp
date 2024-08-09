#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
};

void printLinkedlist(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp = temp->next;
    } 
}

//// Insertion at start

int insertAtStart(Node* head, int value, int position){
    Node* newNode = new  Node();
    if(position==1){
        newNode->next = head;
        head = newNode;
    }
}

int main()
{
    
}