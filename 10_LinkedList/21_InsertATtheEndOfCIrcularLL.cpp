//naive
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
Node * InsertEND(Node *head,int x)
{
          Node * temp=new Node(x);
          if(head==NULL)
          {
                    temp->next=temp;
                    return temp;
          }
          else
          {
                    Node *curr=head;
                    while(curr->next!=head)
                    {
                              curr=curr->next;
                    }
                    curr->next=temp;
                    temp->next=head;
                    return head;
          }
}

int main()
{
          Node *head =new Node(10);
          head ->next=new Node(20);
          head ->next->next=new Node(30);
          head ->next->next->next=new Node(40);
          head->next->next->next->next=head;
          head=InsertEND(head,21);
          return 0;
}