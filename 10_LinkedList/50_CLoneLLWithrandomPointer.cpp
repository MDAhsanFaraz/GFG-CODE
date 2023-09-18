#include <bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
    int data; 
    Node *next,*random; 
    Node(int x) 
    { 
        data = x; 
        next = random = NULL; 
    } 
}; 

void print(Node *start) 
{ 
    Node *ptr = start; 
    while (ptr) 
    { 
        cout << "Data = " << ptr->data << ", Random  = "<< ptr->random->data << endl; 
        ptr = ptr->next; 
    } 
}

Node * clone (Node *h1)
{
          unordered_map<Node*,Node*>m;
          for(Node *curr=h1;curr!=NULL;curr=curr->next)
          {
                    m[curr]=new Node (curr->data);

          }
          for(Node *curr=h1;curr!=NULL;curr=curr->next)
          {
                    Node * cloneCurr=m[curr];
                    cloneCurr->next=m[curr->next];
                    cloneCurr->random=m[curr->random];
}
return m[h1];
}

int main() 
{ 
	Node* head = new Node(10); 
    head->next = new Node(5); 
    head->next->next = new Node(20); 
    head->next->next->next = new Node(15); 
    head->next->next->next->next = new Node(20); 
    
    head->random = head->next->next;
    head->next->random=head->next->next->next;
    head->next->next->random=head;
    head->next->next->next->random=head->next->next;
    head->next->next->next->next->random=head->next->next->next;
    
    cout << "Original list : \n"; 
    print(head); 
  
    cout << "\nCloned list : \n"; 
    Node *cloned_list = clone(head); 
    print(cloned_list); 
  
    return 0; 
} 
