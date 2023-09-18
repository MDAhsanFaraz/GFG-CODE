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
int height(struct Node *root)
{
          if (root== NULL)
          {
                    return 0;
          }
          else
          {
                    return 1 + (  max (  height(root->left)  , height(root->right) )  );
          }
}
int main()
{
          struct Node *root = new struct Node(10);
          root->left = new struct Node(20);
          root->right = new struct Node(30);
          root->left->left = new struct Node(40);
          root->right->right = new struct Node(50);
          cout << height(root);
          return 0;
}