
#include<iostream>

using namespace std;
struct Node
{
          int data;
          Node *prev;
          Node * next;
          Node(int x)
          {
                    data=x;
                    next=NULL;
                    prev=NULL;
          }

};

Node * InsertHead( Node * head ,int x)
{
          Node * temp =new Node(x);
          if(head==NULL)
          {
                    temp->next=temp;
                    temp->prev=temp;
                    return temp;
          }
          temp->prev=head->prev;
          temp->next=head;
          head->prev->next=temp;
          head->prev=temp;
          return temp;
}
int main()
{
          Node *head= new Node(10);
          Node * temp1=new Node(20);
          Node * temp2=new Node(30);
          head->prev=temp2;
          head->next=temp1;
          temp1->next=temp2;
          temp1->prev=head;
          temp2->next=head;
          temp2->prev=temp1;
          head=InsertHead(head,34);
          cout<<head->data;
          return 0;
}