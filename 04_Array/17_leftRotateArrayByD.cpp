// efficient method
#include <iostream>

using namespace std;

void leftrotateD(int arr[], int n, int d)
{
          int temp[d];
          for (int i = 0; i < d; i++)
          {
                    temp[i] = arr[i];
          }
          for (int i = d; i < n; i++)
          {
                    arr[i - d] = arr[i];
          }
          for (int i = 0; i < d; i++)
          {
                    arr[n - d + i] = temp[i];
          }
}
int main()
{
          int arr[] = {23, 10, 32, 5, 7, 32, 67};
          int n = 7;
          int d = 3;
          cout << "Before rotating array D times\n";
          for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          cout << endl;
          leftrotateD(arr, n, d);
          cout << "after rotating array D times\n";
          for (int i = 0; i < n; i++)
          {
                    cout << arr[i] << "\t";
          }
          return 0;
}