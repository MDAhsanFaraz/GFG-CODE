#include <iostream>

using namespace std;
int search(int arr[], int n, int x)
{
      for (int i = 0; i < n; i++)
      {
            if (arr[i] == x)
            {
                  return i;
            }
      }
      return -1;
}

int main()
{
      int arr[] = {23, 32, 5, 6, 7, 83};
      int n = 6;
      int x = 32;
      cout << search(arr, 6, 32);

      return 0;
}