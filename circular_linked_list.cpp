#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* NextNode;

    //constructor
    Node(int d)
    {
        this->data=d;
        this->NextNode=NULL;
    }

    //destructor
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
void InsertElement(Node* &tail, int element, int data)
{
    // assusming that the element is in the list

    //CASE 1
    //where there is no data in the Linked list 
    if(tail==NULL){
        Node* newNode = new Node(data);
        //giving newNode tail value because there is only one element in the Linked list  
        tail=newNode;
        newNode->NextNode=newNode;
    }
    //list is not empty
    else{
        Node* current = tail;
        while(current->data!=element){
            //until the element is not found keep on doing it 
            current=current->NextNode;
        }
        //element found 
        Node* temp = new Node(data);
        temp->NextNode=current->NextNode;
        current->NextNode=temp;
    }
}

void PrintNode(Node* tail){
    Node* temp = tail;
    // using do while leep because it will not print the single element if there is only one element in the linked list 
    // so the do while loop will execute onces then after this it will check the while loop condition

    do{
        cout<<tail->data<<" ";
        tail=tail->NextNode;
    }
    while (tail!=temp);
}

int main()
{
    Node* tail = NULL;
    InsertElement(tail, 0, 10);
    PrintNode(tail);
    InsertElement(tail, 10, 11);
    PrintNode(tail);
    InsertElement(tail, 11, 12);
    PrintNode(tail);

}