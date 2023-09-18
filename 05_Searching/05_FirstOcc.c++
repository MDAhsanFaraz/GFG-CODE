//Iterative code(Using BInary search) code 
#include <iostream>

using namespace std;
 int FirstOcc(int arr[] ,int n, int x)
 {
           int low=0,high=n-1;
           while(low<=high)
           {
                     int mid=(low+high)/2;
                
                      if(arr[mid]>x)
                     {
                               high=mid-1;
                     }   
                      else if(arr[mid]<x)
                     {
                               low=mid+1;
                     }  
                     else
                     {
                               if(mid==0||arr[mid]!=arr[mid-1])
                               {
                                         return mid;
                               }
                               else
                               {
                                         high=mid-1;
                               }
                     }
                        

           }
            return -1;  
           
 }

 int main(){
           int arr []={12,23,3,34,43,34,65,65};
           int n=8;
           int x=34;
           cout<<FirstOcc(arr,n,x)<<" is the first index of occurance of the element in the arrary";
           return 0;
 }