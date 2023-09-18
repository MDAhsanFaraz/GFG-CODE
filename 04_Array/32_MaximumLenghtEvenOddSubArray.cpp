//naive
#include <iostream>

using namespace std;
int Maxlength(int arr[], int n)
{
          int res = 1;
          for (int i = 0; i < n; i++)
          {
                    int curr = 1;
                    for(int j=i+1;j<n;j++)
                    {
                              if((arr[j]%2==0&&arr[j-1]%2!=0)||(arr[j]%2!=0&&arr[j-1]%2==0))
                              {
                                        curr++;
                              }
                              else {
                                        break;
                              }
                    }
                    res=max(res,curr);
          }
          return res ;
}
int main()
{
          int arr[] = {3, 4, 5, 6, 7, 8, 12, 11};
          int n = 8;
          cout<<"maximum lenght of odd and even sub array is\t"<<Maxlength(arr,n);

          return 0;
}