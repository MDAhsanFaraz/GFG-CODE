//naive
#include<iostream>
#include <algorithm>
using namespace std;
int LongestSub(int arr[],int n)
{
          sort(arr,arr+n);
          int curr=1,res=1;
          for(int i=0;i<n;i++)
          {
                    if(arr[i]==arr[i-1]+1)
                    {
                              curr++;
                    }
                    else if(arr[i]!=arr[i-1])
                    {
                              res=max(res,curr);
                              curr=1;
                    }
          }
          return max(res,curr);
}
int main(){
          int arr[]={2,9,4,3,10};
          int n=5;
          cout<<LongestSub(arr,n);

          
          return 0;
}