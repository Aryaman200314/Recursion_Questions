#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data at the node:" << endl;
    int data;
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    // Create a new node with the input data
    root = new Node(data);

    cout << "Enter the data for the left of the node: " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter the data for the right of the node: " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void LevelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);  // Marker for end of current level

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            // Finished processing the current level
            cout << endl;

            // Add marker for the next level
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";

            if (temp->left) {
                q.push(temp->left);
            }

            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}
void inOrder(Node* root){
	if(root==NULL){
		return ;
	}
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

void preOrder(Node* root){
	if(root==NULL){
		return ;
	}
	cout<< root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(Node* root){
	if(root==NULL){
		return ;	
	}
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
		
	}
int main() {
    Node* root = NULL;
    root = buildTree(root);

    // Input example: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 4
    cout << "This is the level order traversal:" << endl;
    LevelOrderTraversal(root);
	cout<<"InOder traversal is:";
	inOrder(root);
	cout<<endl;
	cout<<"PreOrder:";
	preOrder(root);
	cout<<endl;
	cout<<"PostOrder";
	postOrder(root);
    return 0;
}

