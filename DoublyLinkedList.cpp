#include<iostream>
using namespace std;

class Node{
    public:
    Node *PrevNode;
    int data;
    Node *NextNode;


    // cosntructor
    Node(int d){
        // givving data the value d that will be given when the constructor is called first time
        this->data = d;
        // giving Prev pointer the NULL value
        this->PrevNode = NULL;
        // giving Next pointer null value
        this->NextNode =  NULL;
    }
};

void Print(Node* head)
{
    // made an temp node that will traverse though the wholw list 
    Node *temp = head;
    // unit it reaches the last node which has NULL in NextNode
    while(temp!=NULL)
    {
        // Printing the temp-> data in evert itteration 
        cout<< temp->data << " ";
        // After printing noging to the next node 
        temp=temp->NextNode;
    }
    cout<<endl;
}

// Lnegth of the linked list 
int GetLengthList(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp=temp->NextNode;
    }
    return len;
}


void InsertAtHead(int d, Node* &head)
{
    //Making an temp node that will store the data d and will make an new node named as temp
    Node* temp = new Node(d); // this only line will create an new node the way it creates the node is written in constructor above 
    temp->NextNode = head;
    head->PrevNode = temp;
    head = temp;
}

void InsetAtTail(int d, Node* &tail)
{
    //Making an temp node that will store the data d and will make an new node named as temp
    Node* temp = new Node(d);   // this only line will create an new node the way it creates the node is written in constructor above 
    tail->NextNode = temp;
    temp->PrevNode = tail;
    tail = temp;
}


int main()
{
    // make an new node of Node type 
    // after this creation this will call the constructor 
    // the value 10 will be passes as an argument that will hwlp to make an new node 
    Node* node1 = new Node(10);
    // This is making an Node type head node and giving it the vlue of node1 
    // this will be the head of out linkked list  
    Node* head = node1;
    Node* tail = node1;
    Print(head);

    // cout<<GetLengthList(head);

    InsertAtHead(20, head);
    // Print(head);
    InsertAtHead(30, head);
    // Print(head);
    InsertAtHead(40, head);
    Print(head);
    InsetAtTail(69, tail);
    Print(head);
}