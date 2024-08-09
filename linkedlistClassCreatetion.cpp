#include<iostream>
using namespace std;

class Node{
    int data;
    Node* nextptr;

    Node(int datavalue=0){
        this->data = datavalue;
        this->nextptr=NULL;

    }
};

