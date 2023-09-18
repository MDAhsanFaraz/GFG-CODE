// naive
#include<iostream>
#include<algorithm>
using namespace std;
void prntNbyK(int arr[],int n,int k)
{
          sort(arr,arr+n);
          int i=1,count=1;
          while(i<n)
          {
                    while(i<n&&arr[i]==arr[i-1])
                    {
                              count++;
                              i++;
                    }
                    if(count>n/k)
                    {
                              cout<<arr[i-1]<<" ";

                    }
                    count=1;
                    i++;
          }
}
int main(){
          int arr[]={12,43,34,34,34,45,452,30};
          int n=8;
          int k=3;
          prntNbyK(arr,n,k);
          
          return 0;
}