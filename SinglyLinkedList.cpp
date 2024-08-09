#include<iostream>
#include<map>
using namespace std;
class node{ 
    public:
       int data;
       node* next;
       node(int data){
        this->data=data;
        this->next=NULL;
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
// Insertion code 
void insertAtHead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtEnd(node* &tail, int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(node* &tail, node* &head,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtEnd(tail,d);
        return;
    }
    // creating a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
// Deletion code
void deleteNode(int position, node* &head){
    // Deleting first or start node
    if(position==1){
        node* temp = head;
        head = head->next;
    // memory free start node
    temp->next = NULL;
    delete temp;
    }
    else{
        // deletion any middle node or last node
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
         prev->next = curr->next;
         curr->next = NULL;
         delete curr;
    }
}

bool detectLoop(node* head) {

    if(head == NULL)
        return false;

    map<node*, bool> visited;

    node* temp = head;

    while(temp !=NULL) {

        //cycle is present
        if(visited[temp] == true) {
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;

    }
    return false;

}

node* floydDetecteLoop(node* head) {
    if(head == NULL){
        return NULL;
    }
    node* slow = head;
    node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            cout<<" present at "<<slow->data <<endl;
            return slow;
        }
    }
    return NULL;
}
node* getStartingNode(node* head){
    if(head == NULL)
    return NULL;

    node* intersection = floydDetecteLoop(head);
    node* slow = head;

    while(slow != intersection){
        slow = slow->next;
         intersection = intersection->next;
    }
    return slow;

}
node* removeLoop(node* head){
    if(head == NULL){
        return NULL;
    }
    node* startOfLoop = getStartingNode(head);
    if(startOfLoop == NULL)
    return head;

    node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}



int main()
{
    node* node1= new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    node* head = node1;
    node* tail = node1;
    print(head);
    insertAtHead(head,12);
    insertAtHead(head,22);
    insertAtHead(head,32);
    insertAtHead(head,42);
    insertAtHead(head,52);
    insertAtEnd(tail,34);
    insertAtPosition(tail,head,3,74);
    print(head);
    cout<<"After deletion"<<endl;
    deleteNode(5,head);
    print(head);
     tail->next = head->next;
    cout<<" head "<<head->data <<endl;
    cout<<" tail "<<tail->data <<endl;
    if(floydDetecteLoop(head) != NULL){
        cout<<"Cycle is present "<<endl;
    }
    else{
        cout<<"no cycle"<<endl;
    }
    node* loop = getStartingNode(head);
    cout<<" Loop starts at "<<loop->data<<endl;

    removeLoop(head);
    print(head);
     if(floydDetecteLoop(head) != NULL){
        cout<<"Cycle is present "<<endl;
    }
    else{
        cout<<"no cycle"<<endl;
    }

    return 0;
}

