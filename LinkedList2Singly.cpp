#include<iostream>
using namespace std;
// this is the main Node class that will help to make new nodes

class Node{
    public:
    int data;
    // this pointer is pointing to the next node so this is an 
    // node type pointer
    Node* nextnode;


    // constructor 
    Node(int data)
    {
       this->data = data;
       this->nextnode = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        if(this->nextnode!=NULL)
        {
            delete nextnode;
            this->nextnode=NULL;
        }
    }

};




void InsertAtHead(int data, Node* &head)
{
    // first make an new node so use Node class
    // make this same as it is made in the nain function
    Node* temp = new Node(data);
    temp->nextnode = head;
    head = temp;
}

void InsertInMiddle(int data, int pos, Node* &head)
{
    // this node is created beacuse we have to traverse to the place one before where the element has to be added
    // so this temp we store the value of that node which is one before the 
    // place where the new noode has to be added
   if(pos==1)
   {
    InsertAtHead(data, head);
    return;
   }
    Node* prevElement = head;
    int cnt = 1;
    while(cnt<pos-1)
    {
        prevElement = prevElement->nextnode;
        cnt++;
    }
    // make a new node for the data the has to be inserted 
    Node* Nodetoinsert = new Node(data);
    Nodetoinsert->nextnode = prevElement->nextnode;
    prevElement->nextnode = Nodetoinsert;
}

void InsertAtTail(int data, Node* tail)
{
    Node* temp = new Node(data);
    tail->nextnode = temp;
    tail=temp;
}


void DeleteNode(int pos, Node* &head)
{
    // When deleting the first element of the list
    if(pos==1)
    {
        Node* temp = head;
        head = head->nextnode;
        delete temp;
        temp->nextnode = NULL;
    }
    else{
        //deleting the vlaue in the middle or at the end 
        Node* current = head;
        Node* prev = NULL;
        int count  = 1;
        while(count<=pos)
        {
            prev = current;
            current = current->nextnode;
            count++;
        }
        prev->nextnode = current->nextnode;
        delete current;
        current->nextnode=NULL;
    }
}



// To print the value in the linkedlist 
void Print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp-> data << " ";
        temp = temp-> nextnode;
    }
    cout<<endl;
} 


int main()
{
    //This is forst node that is beang added to the list 
    // after this all the nodes are beaing added it its 
    // tail or head
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl; 
    // cout<<node1->nextnode<<endl;


    // giving the node1 as the head value and tail value 
    // head and tail are pointing to the same node1
    Node* head = node1;
    Node* tail = node1; // the tail will alse point to the 
        // node1 because there is only one element in the linkedlist


    Print(head);
    // head the head means giving the node1 
    InsertAtHead(12, head);
    Print(head);
    InsertAtTail(23, tail);
    InsertAtHead(1, head);
    Print(head);
    InsertAtHead(44, head);
    Print(head);
    InsertAtTail(55, tail);
    Print(head);
    InsertInMiddle(69, 1, head);
    Print(head);
    DeleteNode(3, head);
    Print(head);

}