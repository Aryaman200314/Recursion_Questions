#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //condtructor
    Node(int next)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

int main()
{   
    Node* node1 = new Node(10);
    cout<< node1 -> data << endl;
    cout<< node1 -> next << endl;
}