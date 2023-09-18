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
Node *SortedInsert(Node *head , int x)
{
          Node *temp= new Node(x);
          if(head==NULL)
          {
                    return NULL;
          } 
          if(x<head->data)
          {
                    temp->next=head;
                    return head;

          }
          Node * curr=head;
          while(curr->next!=NULL&&curr->next->data<x)
          {
                    curr=curr->next;
          }
          temp->next=curr->next;
          curr->next=temp;
          return head;
}

int main(){
          Node *head=new Node(10);
          Node *temp1=new Node(20);
          Node *temp2=new Node(30);
          head->next=temp1;
          temp1->next=temp2;
     
          head=SortedInsert(head,12);
          cout<<head->next->data;
          
          return 0;
}




