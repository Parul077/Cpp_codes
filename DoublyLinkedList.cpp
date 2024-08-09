#include<iostream>
using namespace std;
class node{ 
    public:
       int data;
       node* next;
       node* prev;

       node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
       }
       ~node(){
        int value = this->data;
        // memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is for node with data "<<value<<endl;
       }
};

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int getLength(node* head){
    int len = 0;
    node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
// Insertion code
void insertAtHead(node* &tail,node* head, int d){
    // empty list
    if(head==NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(node* &tail,node* &head, int d){
    if(tail==NULL){
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else{
        node* temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(node* &tail,node* &head,int position, int d){
    // insert at start
    if(position==1){
        insertAtHead(tail,head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }
    // creating a node for d
    node * nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(int position, node* &head){
    // deleting first node
    if(position==1){
        node* temp = head;
        temp-> next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        } 
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    node* head = NULL;
    node* tail = NULL;
   // print(head);
   // cout<<getLength(head)<<endl;
    insertAtHead(tail,head,11);
    print(head);
    insertAtHead(tail,head,17);
    print(head);
    insertAtHead(tail,head,21);
    insertAtHead(tail,head,31);
    insertAtTail(tail,head,44);
    insertAtTail(tail,head,56);
    insertAtPosition(tail,head,3,67);
    insertAtPosition(tail,head,5,100);
    print(head);
    return 0;
}