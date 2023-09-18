#include <iostream>
#include <unordered_map>
using namespace std;
void Countdist(int arr[], int n, int k)
{
          unordered_map<int, int> m;
          for(int i = 0; i < k; i++)//for starting k elements
          {
                    m[arr[i]]+=1;
          }
          cout<<m.size();
          for(int i=k;i<n;i++)
          {
                    m[arr[i-k]]-=1;
                    if(m[arr[i-k]]==0)
                    {
                              m.erase(arr[i-k]);
                    }
                    m[arr[i]]+=1;
                    cout<<m.size();
          }
}
int main()
{
          int arr[]={10,10,2,3,20,5};
          int n=6;
          int k=4;
          Countdist(arr,n,k);

          return 0;
}