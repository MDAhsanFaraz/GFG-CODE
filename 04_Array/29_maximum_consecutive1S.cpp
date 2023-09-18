//efficient
#include <iostream>
using namespace std;
int MaxConsecutiveones(bool arr[], int n)
{
          int res = 0;
          int curr = 0;
          for (int i = 0; i < n; i++)
          {
                    if (arr[i] == 0)
                    {
                              curr = 0;
                    }
                    else
                    {
                              curr++;
                              res = max(res, curr);
                    }
          }
          return res;
}

int main()
{
          bool arr[] = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1};
          int n = 10;
          cout << "maximum consecutive 1's are\t" << MaxConsecutiveones(arr, n);
          return 0;
}