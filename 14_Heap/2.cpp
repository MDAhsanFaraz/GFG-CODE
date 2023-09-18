#include <iostream>
#include <vector>

using namespace std;
struct Node
{
          Node *left, *right;
          int key;
          Node(int k)
          {
                    key = k;
                    left = right = NULL;
          }
};
int i=0;
void treetolist(Node *root,int arr[])
{
          if (root == NULL)
          {
                    return;
          }
          treetolist(root->left, arr);
           arr[i]=root->key;
          i++;
          treetolist(root->right, arr);
}

int main()
{
          Node *root = new Node(15);
          root->left = new Node(5);
          root->left->left = new Node(3);
          root->right = new Node(20);
          root->right->left = new Node(18);
          root->right->left->left = new Node(16);
          root->right->right = new Node(80);
          vector<int> vec;
          int sum = 23;
          int arr[7]={0};
          treetolist(root,arr);
          for(int i=0;i<7;i++)
          {
            cout<<arr[i]<<" ";
          }
          return 0;
}