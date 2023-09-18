// naive
#include <iostream>

using namespace std;
int maxSubArraySum(int arr[], int n)
{
   int res = arr[0];
   for (int i = 0; i < n; i++)
   {
      int curr = 0;
      for (int j = i; j < n; j++)
      {
         curr = curr + arr[j];
         res = max(curr, res);
      }
   }
   return res;
}
int main()
{
   int arr[] = {23, -4, 13, -345, 61, 2};
   int n = 6;
   cout << "maximum sub array sum is\t" << maxSubArraySum(arr, n);

   return 0;
}