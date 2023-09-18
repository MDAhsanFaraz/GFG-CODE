//efficientss
#include <iostream>

using namespace std;
int Findmajority(int arr[], int n)
{
          int res = 0, count = 1;
          for (int i = 1; i < n; i++)
          {
                    if (arr[res] == arr[i])
                    {
                              count++;
                    }
                    else
                    {
                              count--;
                    }
                    if (count == 0)
                    {
                              res = i;
                              count = 1;
                    }
          }
          count = 0;
          for (int i = 0; i < n; i++)
          {
                    if (arr[res] == arr[i])
                    {
                              count++;
                    }
          }
          if (count <= n / 2)
          {
                    return -1;
          }
          return res;
}
int main()
{
          int arr[] = {1, 1, 3, 3, 4, 4, 4, 4, 4};
          int n = 9;
          cout << "majority element is \t" << Findmajority(arr, n);
          return 0;
}