// naive method
#include <iostream>

using namespace std;
int Getlargest(int arr[], int n)
{
          int lar = 0;
          for (int i = 0; i < n; i++)
          {
                    if (arr[i] > arr[lar])
                    {
                              lar = i;
                    }
          }
          return lar;
}
int secondlargest(int arr[], int n)
{
          int largest = Getlargest(arr, n);
          int res = -1;
          for (int i = 0; i < n; i++)
          {
                    if (arr[i] != arr[largest])
                    {
                              if(res==-1)
                              {
                                        res=i;
                              }
                              else if(arr[i]>arr[res])
                              {
                                        res=i;
                              }
                            
                    }
          }
          return res;
}

int main()
{
          int arr[] = {22, 23, 48, 43, 234, 45};
          cout << secondlargest(arr, 6)<<"is the second largest element";
          return 0;
}