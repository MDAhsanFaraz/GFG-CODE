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
void DeleteNode(Node * ptr)//pointer of the node to deleted
{
          Node *temp=ptr->next;
          ptr->data=ptr->next->data;
          delete(temp);
}
int main(){
          Node *head=new Node(10);
          head->next=new Node(20);
          head->next->next=new Node(30);
          DeleteNode(head->next);
          
          

          
          return 0;
}