// Recursive Binary search
#include <iostream>

using namespace std;
int BinaryS(int arr[], int low, int high, int x)
{
          int mid = (high + low) / 2;

          if (low > high)
          {
                    return -1;
          }
          if (arr[mid] == x)
          {
                    return mid;
          }

          else if (arr[mid] > x)
          {
                    return BinaryS(arr, low,mid-1,x);
          }
          else
          {
                    return BinaryS(arr, mid+1,high ,x);
          }
}
 int main(){
           int arr []={12,23,234,34,43,54,65,65};
           int n=8;
           int x=34;
           cout<<BinaryS(arr,0,7,43)<<" is the position of the element in the  array";
           return 0;
 }