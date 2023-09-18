// efficient
#include<iostream>
#include<unordered_set>
using namespace std;
bool Sub0sum(int arr[],int n)
{
          unordered_set<int> h;
          int pre_sum=0;
          for(int i=0;i<n;i++)
          {
                    pre_sum+=arr[i];
                    if(h.find(pre_sum)!=h.end())
                    {
                              return true;
                    }
                    if (pre_sum==0)//corner case
                    {
                              return true;
                    }
                    h.insert(pre_sum);
          }
          return false;
}


int main(){
                            int arr[]={23,35,34,23,23,34,1313,-34,34};
          
          int n=9;
          if(Sub0sum(arr,n))
          {
                    cout<<"true";
          }
          else
          {
                    cout<<"false";
          }
          
          return 0;
}