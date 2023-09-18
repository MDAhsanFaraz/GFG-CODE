//naive
#include <iostream>

using namespace std;
int maximumdDiff(int arr[], int n)
{
          int res = arr[1] - arr[0];
          int i = 0;
          for (i; i < n; i++)
          {
                    for (int j = i + 1; j < n; j++)
                    {
                              res = max(res, arr[j] - arr[i]);
                    }
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