// Reversal algorithm

#include <iostream>

using namespace std;
void reverse(int arr[],int low,int high)
{
         
          while(low<high)
          {
                  swap(arr[low],arr[high]);
                    low++;
                    high--;
          }
}

void leftrotateD(int arr[], int n, int d)
{
         reverse(arr,0,d-1);
         reverse(arr,d,n-1);
         reverse(arr,0,n-1);
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
