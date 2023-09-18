// naive
#include <iostream>

using namespace std;
int maxcommon(int arr1[], int arr2[], int n)
{
          int res = 0;
          for (int i = 0; i < n; i++)
          {
                    int sum1 = 0, sum2 = 0;
                    for(int j=i;j<n;j++)
                    {
                              sum1+=arr1[j];
                              sum2+=arr2[j];
                              if(sum1==sum2)
                              {
                                         res=max(res,j-i+1);
                              }
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