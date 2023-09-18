//efficient
#include <iostream>
#include <unordered_map>
using namespace std;
int longSub(int arr[], int n, int sum)
{
          for(int i=0;i<n;i++)
          {
                    if(arr[i]==0)
                    {
                              arr[i]=-1;
                    }
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
             int arr[]={1,0,0,1,1,1,0,0,1};
          int n=sizeof(arr)/sizeof(arr[1]);
          int sum=0;
          cout<<longSub(arr,n,sum);

          return 0;
}