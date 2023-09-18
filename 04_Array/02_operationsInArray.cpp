//insert element 
#include<iostream>

using namespace std;
int insert(int arr[],int n,int x, int cap, int pos)
{
          if (n==cap)//checking if the capacity is equal to the number of elements or not
          {
                    return n;
          }
          int idx=pos-1;
          for(int i=n-1;i>=idx;i--)
          {
                    arr[i+1]=arr[i];
          }
          arr[idx]=x;
          return n+1;
         
}
int main(){
          int arr[5]={12,3,5};
          int cap =5;
          int n=3;//size of the array
          cout<<"Before insertion\n";
          for(int i=0;i<n;i++)
          {
                    cout<<arr[i]<<"\n";
          }
          int x=7;//element to be inserted
          int pos =2;
          insert (arr,n,x,cap,pos);
          cout<<"After insertion\n";
             for(int i=0;i<n;i++)
          {
                    cout<<arr[i]<<"\n";
          }
          
     
          return 0;
}