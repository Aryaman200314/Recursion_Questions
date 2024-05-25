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


    // destructor
    ~Node()
    {
        int value =  this->data;
        if(NextNode != NULL)
        {
        delete NextNode;
        NextNode = NULL;
        }
        cout<< "memory deleted for value" << value << endl;
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
    if(head==NULL)
    {
        Node* temp = new Node(d);
        head = temp;
    }
    else
    {
    //Making an temp node that will store the data d and will make an new node named as temp
    Node* temp = new Node(d); // this only line will create an new node the way it creates the node is written in constructor above 
    temp->NextNode = head;
    head->PrevNode = temp;
    head = temp;
    }
}

void InsertAtTail(int d, Node* &tail)
{
    if(tail==NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
    //Making an temp node that will store the data d and will make an new node named as temp
    Node* temp = new Node(d);   // this only line will create an new node the way it creates the node is written in constructor above 
    tail->NextNode = temp;
    temp->PrevNode = tail;
    tail = temp;
    }
}

void InsertAtPosition( int d, int pos, Node* &head, Node* &tail){
    // insert at the start
    if(pos==1)
    {
        InsertAtHead(d, head);
        return;
    }
    else{
        Node* temp = head;
        int cnt = 1;
        
        // This loop is to traverse through the list to reach the element before the 
        // insert position
        // temp is the node which will be usedd to access the node which is after the insertion position
        while(cnt<pos-1)
        {
            temp = temp->NextNode;
            cnt++;
        }

        // if the position is last 
        if(temp->NextNode == NULL)
        {
        InsertAtTail(d, tail);
        return;
        }

        else{
        // Now if the position in inbetween somewhere 

        // create an new node 
        Node* NodeToInsert = new Node(d);
        NodeToInsert->NextNode = temp->NextNode;
        temp->NextNode->PrevNode = NodeToInsert;
        temp->NextNode = NodeToInsert;
        NodeToInsert->PrevNode = temp;
        }
    }
}


void Deletion(int pos, Node* &head){
    if(pos == 1){
        Node* temp = head;
        temp->NextNode->PrevNode = NULL;
        head=temp->NextNode;
        temp->NextNode=NULL;
        delete temp;
    }
    else
    {
        // for last and in between 
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<pos)
        {
            prev = current;
            current = current->NextNode;
            cnt++;
        }
        current->PrevNode = NULL;
        prev->NextNode = current->NextNode;
        current->NextNode = NULL;
        
        delete current;
    }
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
    // Node* head = NULL;
    // Node* tail = NULL;
    Print(head);

    // cout<<GetLengthList(head);

    InsertAtHead(20, head);
    // Print(head);
    InsertAtHead(30, head);
    // Print(head);
    InsertAtHead(40, head);
    Print(head);
    InsertAtTail(69, tail);
    InsertAtTail(79, tail);
    Print(head);
    InsertAtPosition(99, 3, head, tail);
    Print(head);
    InsertAtPosition(100, 8, head, tail);
    InsertAtPosition(900, 1, head, tail);
    Print(head);
}