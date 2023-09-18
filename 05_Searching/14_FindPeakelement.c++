#include<iostream>

using namespace std;
int peak(int arr[],int n)
{
          int high =n-1,low=0;
          while(low<=high)
          {
          int mid=(high+low)/2;
          if((mid==0)||(arr[mid-1]<=arr[mid])&&(mid==n-1)||(arr[mid+1]<=arr[mid]))
          {
                    return mid;
          }
          if(mid>0&&arr[mid-1]>=arr[mid])
          {
                    high=mid-1;
          }
          else{
                    low=mid+1;
          }
          }
return -1;

}

int main()
{

       int arr[] = {10, 20, 40, 60, 5, 8}, n = 6;

          int x = 8 ;
        

          cout << peak(arr, n)<< " is the index of the peak element";

          return 0;
}