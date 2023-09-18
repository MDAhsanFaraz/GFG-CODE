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
void RemoveDup(Node * head)
{
          Node * curr=head;
          while(curr!=NULL&&curr->next!=NULL)
          {
                    if(curr->data==curr->next->data)//Linked list is sorted
                    {
                              Node *temp=curr->next;
                              curr->next=curr->next->next;
                              delete temp;
                    }
                    else
                    {
                              curr=curr->next;
                    }
          }
}

int main(){
          Node *head=new Node(10);
          head->next=new Node(30);
          head->next->next=new Node(30);
          
       cout<<"before dup removal\n ";   
     cout<<head->data<<" ";
     cout<<head->next->data<<" ";
     cout<<head->next->next->data<<" \n";
     RemoveDup(head);
      cout<<"After  dup removal\n ";  
     cout<<head->data<<" ";
     cout<<head->next->data<<" ";
     cout<<head->next->next->data<<" ";

          
          return 0;
}