//naive code O(n)
#include <iostream>

using namespace std;
int Firstocc(int arr[], int n, int x)
{
          for (int i=0;i<n;i++)
          {
                    if(arr[i]==x)
                    {
                              return i;
                    }

          }
          return -1;
}
 int main(){
           int arr []={12,23,34,34,43,34,65,65};
           int n=8;
           int x=34;
           cout<<Firstocc(arr,n,x)<<" is the first index occurance of the element in the arrary";
           return 0;
 }