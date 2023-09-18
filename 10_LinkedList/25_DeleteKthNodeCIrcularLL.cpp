//NAIVE
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
Node *DelHead(Node * head)
{
          if(head==NULL)
          {
                     return NULL;
          }
         
          if(head->next=NULL)
          {
                    delete head;
                    return NULL;
          }
          head->data=head->next->data;//copying data of 2nd node in head
          Node *temp=head->next;//storing address of 2nd node in temp
          head->next=head->next->next;// copying address of 3rd node in head's next
          delete temp;// deleting 2nd through temp
          return head;// returning head 
}
Node *DelKth(Node * head,int x)
{
          if(head==NULL)
          {
                     return NULL;
          }
         
          if(x==1)
          {
                    return DelHead(head);//using previous function
                    
          }
          Node* curr=head;
          for(int i=0;i<x-2;i++)
          {
                    curr=curr->next;
          }
          Node *temp=curr->next;
          curr->next=curr->next->next;
          delete temp;
          return head;



   

}

int main()
{
          Node *head =new Node(10);
          head ->next=new Node(20);
          head ->next->next=new Node(30);
          head ->next->next->next=new Node(40);
          head->next->next->next->next=head;
          head=DelKth(head,3);  
            
          return 0;
}