// efficient method
#include<iostream>

using namespace std;
bool CheckSorted(int arr[],int n)
{
          for(int i=1;i<n;i++)
          {
                 if(arr[i]<arr[i-1])
                 {
                           return false;
                 }
          }
          return true;
}
int main(){
          int arr []={23,45,677,895,953,2345,32};
          int n=7;
       cout<<   CheckSorted(arr,n);
          return 0;
}