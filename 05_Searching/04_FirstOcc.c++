//recursive code(Using BInary search) code 
#include <iostream>

using namespace std;
int Firstocc(int arr[], int low, int high,int x)
{
              if(low>high)
          {
                    return -1;
          }
          int mid=(low+high)/2;
      
          if(arr[mid]>x)
          {
                    return Firstocc(arr,low,mid-1,x);
          }
             else if(arr[mid]<x)
          {
                    return Firstocc(arr,mid+1,high,x);
          }
          else 
          {
                    if(mid==0||arr[mid-1] !=arr[mid])
                    {
                              return mid;
                    }
                    else 
                    {
                              return Firstocc(arr,low,mid-1,x);
                    }
          }


}
 int main(){
           int arr []={12,23,34,34,43,34,65,65};
           int n=8;
           int x=34;
           cout<<Firstocc(arr,0,8,x)<<" is the first index of occurance of the element in the arrary";
           return 0;
 }