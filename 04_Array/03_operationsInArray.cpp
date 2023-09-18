#include <iostream>

using namespace std;
int deleteEle(int arr[], int n, int x)
{
       int i;
       for (i = 0; i < n; i++)
       {
              if (arr[i] == x)
              {
                     break;
              }
       }
       if (i==n)//means did not found element to be deleted in the array
       {
              return n;
       }
       for (int j = i; j < n - 1; j++)
       {
              arr[j] = arr[j + 1];
       }
       return (n - 1);
}
int main()
{

       int arr[] = {3, 8, 12, 5, 6};
       int x = 12; // element to be deleted
       int n = 5;  // size of the  array

       cout << "Before Deletion" << endl;

       for (int i = 0; i < n; i++)
       {
              cout << arr[i] << " ";
       }

       cout << endl;

       n = deleteEle(arr, n, x);

       cout << "After Deletion" << endl;

       for (int i = 0; i < n; i++)
       {
              cout << arr[i] << " ";
       }
}