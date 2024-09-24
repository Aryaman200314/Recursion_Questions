#include<iostream> 
#include<queue>
using namespace std;

class Node {
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
};

Node* insertDataBST(Node* root, int d){
	if(root == NULL){
		root = new Node(d);
		return root;
	}
	if(d > root->data){
		root->right = insertDataBST(root->right, d);
	}
	else {
		root->left = insertDataBST(root->left, d);
	}
	return root;
}


void takeInput(Node* &root){
	int data;
	while(data!=-1){
		cin>> data;
		root = insertDataBST(root, data);
	}
}


void levelOrderTraversal(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* temp = q.front();
		q.pop();
		
		if(temp == NULL){
			 cout<< endl;
		
		if(!q.empty()){
			q.push(NULL);
				}
			}
			else{
				cout<<temp->data << " ";
				if(temp->left) {
					q.push(temp->left);
				}
				if(temp->right) {
				q.push(temp->right);
			}
		}
	}
}

int main(){
	Node* root = NULL;
	cout<<"Enter data"<<endl;
	takeInput(root);
	
	cout<<"Printing the BST"<<endl;
	levelOrderTraversal(root);
} 
