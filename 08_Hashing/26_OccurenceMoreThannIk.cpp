#include<iostream>
#include<unordered_map>
using namespace std;
void PrintNbyK(int arr[],int n,int k)
{
          unordered_map<int,int>m;
          for(int i=0;i<n;i++)
          {
                    m[arr[i]]+=1;
          }
          for(auto e:m)
          {
                    if(e.second>n/k)
                    {
                              cout<<e.first<<" ";
                    }
          }

}
int main(){
                int arr[]={12,43,34,34,34,45,452,30};
          int n=8;
          int k=3;
          PrintNbyK(arr,n,k);
          return 0;
}