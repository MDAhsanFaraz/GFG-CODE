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
          return 0;
}