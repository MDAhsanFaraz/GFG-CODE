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
Node *delHead(Node *head)
{
          if(head==NULL)
          return NULL;
          else 
          {
                    Node * temp =head->next;
                    delete head;
                    return temp;
          }
}

int main(){
          Node *head=new Node(10);
          head->next=new Node(20);
          head->next->next=new Node(30);
          cout<<head->data<< " ";
          head =delHead(head);
          cout<<head->data;
          
          
          return 0;
}