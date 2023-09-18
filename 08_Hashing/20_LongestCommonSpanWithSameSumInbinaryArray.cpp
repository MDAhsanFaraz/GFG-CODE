// efficient
#include <iostream>
#include <unordered_map>
using namespace std;
int maxcommon(int arr1[],int arr2[], int n)
{ int arr[n];
int sum=0;
          for(int i=0;i<n;i++)
          {
                    arr[i]=arr1[i]-arr2[i];
          }
          unordered_map<int, int> m;
          int pre_sum = 0, res = 0;
          for (int i = 0; i < n; i++)
          {
                    pre_sum += arr[i];
                    if (pre_sum == sum)
                    {
                              res=i+1;
                    }
                    if(m.find(pre_sum)==m.end())
                    {
                              m.insert({pre_sum,i});



                    }
                    if(m.find(pre_sum-sum)!=m.end())
                    {
                              res=max(res,i-m[pre_sum-sum]);
                    }
                    
          }
          return res;
}
int main()
{
        int arr1[]={0,0,0,0,1,1,1,0,0};
          int arr2[]={0,1,0,0,1,1,1,0,0};
          int n=9;
          cout<<maxcommon(arr1,arr2,n);

          return 0;
}