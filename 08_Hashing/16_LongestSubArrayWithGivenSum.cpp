//efficient
#include <iostream>
#include <unordered_map>
using namespace std;
int Maxlen(int arr[], int n, int sum)
{
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
             int arr[]={23,4,1,5,1,1,2,23,5,6,23,5,5,23};
          int n=sizeof(arr)/sizeof(arr[1]);
          int sum=10;
          cout<<Maxlen(arr,n,sum);

          return 0;
}