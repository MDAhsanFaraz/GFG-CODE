// naive
#include <iostream>

using namespace std;
bool isSubarrSum(int arr[], int n, int sum)
{
          for (int i = 0; i < n; i++)
          {
                    int curr_sum = 0;
                    for (int j = i; j < n; j++)
                    {
                              curr_sum+=arr[j];
                              if(curr_sum == sum)
                              {
                                        return true;
                              }
                    }
          }
          return false;
}

int main()
{
                            int arr[]={23,35,34,23,23,34,1313,-34,34};
          
          int n=9;
          int sum=46;
          if(isSubarrSum(arr,n,sum))
          {
                    cout<<"true";
          }
          else
          {
                    cout<<"false";
          }


          return 0;
}