
// INORDER ->  Left Root Right
#include <iostream>

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

void inorder(struct Node *root)
{
          if (root!=NULL)
          {
                    inorder(root->left);
                    cout<<root->key<<" ";
                    inorder(root->right);
          }

}
int main()
{
          Node *root = new  struct Node(10);
          root->left = new  struct Node(20);
          root->right = new struct Node(30);
          root->left->left = new struct Node(40);
          root->right->right = new  struct Node(50);
          inorder(root);

          return 0;
}