// efficient method
#include <iostream>
using namespace std;
int RemoveDup(int arr[], int n)
{

          int res = 1;

          for (int i = 0; i < n; i++)
          {
                    if (arr[res - 1] != arr[i])
                    {
                              arr[res] = arr[i];
                              res++;
                    }
          }
          return res;
}

int main()
{
          int arr[] = {23, 23, 45, 45, 77, 77, 22, 13, 13};
          int n = 9;
          cout << "Before removal of duplicate\n";
          for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          cout << endl;
          int m = RemoveDup(arr, n);
          cout << "after removal of duplicate\n";
          for (int i = 0; i < m; i++)
          {
                    cout << arr[i] << "\t";
          }
          cout << endl;
          return 0;
}