//efficient
#include<iostream>
#include<unordered_set>
using namespace std;
int LongestSub(int arr[],int n)
{
          unordered_set<int> h(arr,arr+n);
          int res=1;
          for(auto x:h)
          {
                    if(h.find(arr[x-1])==h.end())//if there is no x-1 in hash table
                    {
                              int curr=1;
                              while(h.find(x+curr)!=h.end())
                              {
                                        curr++;
                                        res=max(res,curr);
                              }
                    }
          }
          return res;

}
int main(){
            int arr[]={2,9,4,3,10};
          int n=5;
          cout<<LongestSub(arr,n);

          
          return 0;
}