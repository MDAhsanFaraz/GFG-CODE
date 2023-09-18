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

void VsumMap(Node *root,int hd,map<int,int>&m)
{
          if(root==NULL)
          {
                    return ;
          }
          VsumMap(root->left,hd-1,m);
          m[hd]+=root->key;
          VsumMap(root->right,hd+1,m);
}
void Vsum(Node* root)
{
          map<int,int>m;
          VsumMap(root,0,m);
          for(auto i:m)
          {
                    cout<<i.second<<" ";
          }
}

int main()
{

          Node *root = new Node(10);
          root->left = new Node(20);
          root->right = new Node(50);
          root->left->left = new Node(30);
          root->left->right = new Node(40);

          Vsum(root);

          return 0;
}