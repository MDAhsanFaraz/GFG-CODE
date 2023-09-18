#include<iostream>

using namespace std;
struct Node
{
          int data;
          Node *prev;
          Node *next;
          Node(int x)
          {
                    data=x;
                    prev=NULL;
                    next=NULL;
          }
          
};
Node *reverseDLL(Node * head)
{
          if(head == NULL||head->next==NULL)
          {
                    return head;
          }
          Node*Prev=NULL;
          Node *curr=head;
          while(curr!=NULL)
          {
                    Prev=curr->prev;
                    curr->prev=curr->next;//exchanging prev with next
                    curr->next=Prev;//exchanging next with prev
                    curr=curr->prev;// increading curr to next node// prev is now next
          }
          return Prev->prev;
}
int main()
{
          Node *head=new Node(10);
          Node *temp1=new Node(20);
          Node *temp2=new Node(30);
          head->next=temp1;
          temp1->prev=head;
          temp1->next=temp2;
          temp2->prev=temp1;
          head=reverseDLL(head);
        
          
          

          
          return 0;
}