#include <bits/stdc++.h>
using namespace std;
#define COUNT 10
struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

Node *insert(Node *root, int x){
    Node *temp=new Node(x);
    Node *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;
} 

// Function to print binary tree in 2D
// It does reverse inorder traversal
void print2DUtil(Node* root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->key << "\n";
 
    // Process left child
    print2DUtil(root->left, space);
}
 
// Wrapper over print2DUtil()
void print2D(Node* root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=1;
	
	root=insert(root,x);
	print2D( root);
}