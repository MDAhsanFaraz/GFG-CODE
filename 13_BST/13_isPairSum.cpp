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
void treetolist(Node *root, vector<int> &vec)
{
          if (root == NULL)
          {
                    return;
          }
          treetolist(root->left, vec);
          vec.push_back(root->key);
          treetolist(root->right, vec);
}
bool pairSum(Node *root, int sum)
{
          vector<int> vec;
          treetolist(root, vec);
          int start = 0;
          int end = vec.size() - 1;
          while (start < end)
          {
                    if (vec[start] + vec[end] == sum)
                    {
                              cout << "Pair Found: " << vec[start] << " + " << vec[end] << " "
                                   << "= " << sum;
                              return true;
                    }
                    if (vec[start] + vec[end] > sum)
                    {
                              end--;
                    }
                    if (vec[start] + vec[end] < sum)
                    {
                              start++;
                    }
          }
          cout<<"NO PAIR IS FOUND OF GIVEN SUM";
          return false;
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
          pairSum(root, sum);
          return 0;
}