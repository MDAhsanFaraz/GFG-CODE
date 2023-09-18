// efficients
#include<iostream>
#include<unordered_set>
using namespace std;
bool isSum(int arr[],int n,int sum)
{
          unordered_set<int> h;
          int pre_sum=0;
          for(int i=0;i<n;i++)
          {
                    pre_sum+=arr[i];
                    if(h.find(pre_sum-sum)!=h.end())
                    {
                              return true;
                    }
                    if(pre_sum==sum)
                    {
                              return true;
                    }
                    h.insert(arr[i]);
                    
          }
          return false ;
}
int main(){
          
          return 0;
}