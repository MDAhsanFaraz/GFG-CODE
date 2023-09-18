//recursive code(Using BInary search
#include <iostream>

using namespace std;
int Lastocc(int arr[], int low, int high,int x,int n)
{
              if(low>high)
          {
                    return -1;
          }
          int mid=(low+high)/2;
      
          if(arr[mid]>x)
          {
                    return Lastocc(arr,low,mid-1,x,n);
          }
             else if(arr[mid]<x)
          {
                    return Lastocc(arr,mid+1,high,x,n);
          }
          else 
          {
                    if(mid==n-1||arr[mid +1] != arr[mid])
                    {
                              return mid;
                    }
                    else 
                    {
                              return Lastocc(arr,mid+1,high,x,n);
                    }
          }


}
 int main(){
           int arr []={12,23,34,34,34,65,65};
           int n=8;
           int x=34;
           cout<<Lastocc(arr,0,8,x,9)<<" is the last index  of the element in the arrary";
           return 0;
 }