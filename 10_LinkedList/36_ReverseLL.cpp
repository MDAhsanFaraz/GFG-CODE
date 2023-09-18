// recursive solution
//efficient
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
struct Node
{
          int data;
          Node *next;
          Node(int x)
          {
                    data=x;
                    next=NULL;
          }
          
};
Node *revlist(Node *curr,Node *prev)
{
          if(curr==NULL)return prev;
          Node *next=curr->next;
          curr->next=prev;
          return revlist(next,curr);
 
}

int main(){
          Node *head=new Node(10);
          head->next=new Node(20);
          head->next->next=new Node(30);
          head->next->next->next=new Node(40);
         head= revlist(head,NULL);
         cout<<head->data<<" "<< head->next->data;
          
          return 0;
}