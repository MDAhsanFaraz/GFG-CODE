
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
Node *insertBegin(Node*head,int x)
{
          Node *temp=new Node(x);
          temp->next=head;
          return temp;
}

int main(){
          Node *head=NULL;
          head=insertBegin(head,30);//storing new head address in head Pointer 
          head=insertBegin(head,40);
          head=insertBegin(head,50);
          head=insertBegin(head,96);

          
          return 0;
}