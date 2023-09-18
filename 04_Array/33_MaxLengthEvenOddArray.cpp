#include <iostream>

using namespace std;
int Maxlength(int arr[], int n)
{
          int res = 1;
          int curr=1;
          for (int i = 1; i < n; i++)
          {
                    if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0))
                    {
                              curr++;
                              res=max(res,curr);
                    }
                    else{
                              curr=1;
                    }
          }
          return res;
}
int main()
{
          int arr[] = {3, 4, 5, 6, 7, 8, 12, 11};
          int n = 8;
          cout << "maximum lenght of odd and even sub array is\t" << Maxlength(arr, n);

          return 0;
}