#include <bits/stdc++.h>
using namespace std;

struct Node
{
          int key;
          struct Node *left;
          struct Node *right;
          Node(int k)
          {
                    key = k;
                    left = right = NULL;
          }
};

int MaxinBtree(Node *root)
{
          if(root==NULL)
          {
                    return INT_MIN;
          }
          else
          {
                    return max(root->key,max(MaxinBtree(root->left),MaxinBtree(root->right)));
          }
}

int main()
{

          Node *root = new Node(10);
          root->left = new Node(20);
          root->right = new Node(30);
          root->left->left = new Node(40);
          root->left->right = new Node(50);
          root->right->right = new Node(60);

          cout << MaxinBtree(root);
}