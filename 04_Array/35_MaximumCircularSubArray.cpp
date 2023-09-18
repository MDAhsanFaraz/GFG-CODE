//efficient
#include <iostream>

using namespace std;
int maxSubArraySum(int arr[], int n) // kadanes algo
{
          int res = arr[0];
          int maxending = arr[0];
          for (int i = 1; i < n; i++)
          {
                    maxending = max(maxending + arr[i], arr[i]);
                    res = max(maxending, res); //
          }
          return res;
}
int Overallmax(int arr[], int n)
{
          int max_normal = maxSubArraySum(arr, n); // max sum of normal subarray
          if (max_normal < 0)
          {
                    return max_normal;
          }
          int arr_sum = 0;
          for (int i = 0; i < n; i++)
          {
                    arr_sum += arr[i]; // sum of whole array
                    arr[i]=-arr[i];
          }
          int max_circular =arr_sum+maxSubArraySum(arr,n);//adding maximum of inverted array
          //which  will give minimum of the array and we are adding not substracting because
          //we inverted the aray (and called kaddanes algo) to get minimum of the array
          return max(max_circular,max_normal); 
}

int main()
{
          int arr[] = {23, 4, 3, 30, 32, 1, 31, 34};
          int n = 8;
          cout << "maximum sum of all normal and circular subarray is \t" << Overallmax(arr, n);
          return 0;
}