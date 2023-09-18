//efficient
#include<iostream>
#include<unordered_set>
using namespace std;
bool isPair(int arr[],int n,int sum)
{
          unordered_set<int>h;
          for(int i=0;i<n;i++)
          {
                    if(h.find(sum-arr[i])!=h.end())
                    {
                              return true;
                    }
                    else
                    {
                              h.insert(arr[i]);
                    }
          }
          return false;
}
int main(){
         int arr[]={23,35,34,23,23,34,1313,35,34};
          int sum=8;
          int n=58;
          if(isPair(arr,n,sum))
          {
                    cout<<"true";
          }
          else
          {
                    cout<<"false";
          }
          return 0;
}