
#include<iostream>
#include<algorithm>
#include<vector>

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
Node *revlist(Node *head)
{
          vector<int>arr;
          for(Node *curr =head;curr!=NULL;curr=curr->next)
          {
                    arr.pushback(curr->data);
          }
          for(Node *curr =head;curr!=NULL;curr=curr->next)
          {
                    curr->data=arr.back();
                    arr.pop_back();
          }
          return head;
}

int main(){
          Node *head=new Node(10);
          head->next=new Node(20);
          head->next->next=new Node(30);
         head= revlist(head);
          
          return 0;
}