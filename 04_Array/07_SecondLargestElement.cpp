// Efficeint method
#include <iostream>

using namespace std;
int secondlargest(int arr[], int n)
{
          int res = -1, largest = 0;
          for (int i = 1; i < n; i++)
          {
                    if (arr[i] > arr[largest])
                    {
                              res = largest;
                              largest = i;
                    }
                    else if (arr[i] != arr[largest]) // this is for arr[i] ==arr[largest]
                                                     // we have to ignore this thats why we use this condition
                    {
                              if (res == -1 || arr[i] > arr[res])
                              {
                                        res = i;
                              }
                    }
          }
          return res;
}
int main()
{
          int arr[] = {23, 43, 56, 61, 123, 4, 1};
          int n = 7;
          cout << secondlargest(arr, n);
          return 0;
}