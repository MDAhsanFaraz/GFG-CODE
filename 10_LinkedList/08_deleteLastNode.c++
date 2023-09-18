// shorter way
#include<iostream>

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
Node *delLast(Node *head)
{
          if(head==NULL)
          return NULL;
          if (head->next==NULL)//if there is only one node in th LL
          {
                    delete head;
                    return NULL;
          }
          Node *curr=head;
          while (curr->next->next!=NULL)//till it reaches second last element

          {
                    curr=curr->next;

          }
          delete curr->next;//delete last node 
          curr->next==NULL;//make 2nd last elment next as NULL
          return head;//return the same head
}

int main(){
          Node *head=new Node(10);
          head->next=new Node(20);
          head->next->next=new Node(30);
          head->next->next->next=new Node(80);
         head=delLast(head);
          
          
          return 0;
}