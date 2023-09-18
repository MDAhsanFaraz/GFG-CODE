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
Node *revlist(Node *head)
{
          Node * curr=head;
          Node * prev =NULL;
          while(curr!=NULL)
          {
                    Node *next=curr->next;
                    curr->next=prev;
                    prev=curr;
                    curr=next;
                    
          }
          return prev;//returning prev as new head as curr will became NULL 
}

int main(){
          Node *head=new Node(10);
          head->next=new Node(20);
          head->next->next=new Node(30);
          head->next->next->next=new Node(40);
         head= revlist(head);
         cout<<head->data<<" "<< head->next->data;
          
          return 0;
}