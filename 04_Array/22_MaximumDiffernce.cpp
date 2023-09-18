//efficient
#include <iostream>

using namespace std;
int maximumdDiff(int arr[], int n)
{
          int minval = arr[0];
          int res = arr[1] - arr[0];
          for (int j = 1; j < n; j++)
          {
                    res = max(res, arr[j] - minval);
                    minval = min(arr[j], minval);
          }
          return res;
}
int main()
{
          int arr[] = {23, 345, 666, 23, 4, 6, 67, 75};
          int n = 8;
          cout << "maximum Difference  is"
               << " " << maximumdDiff(arr, n);

          return 0;
}