  // efficient method
#include<iostream>

using namespace std;
void leader(int arr[],int n)
{
 int curr_ldr=arr[n-1];
 cout<<curr_ldr<<"\n";
 for (int i=n-2;i>=0;i--)
 {
           if(curr_ldr<arr[i])
           {
                     curr_ldr=arr[i];
                     cout<<curr_ldr<<"\n";
           }
 }
 
}
int main(){
          int arr[] ={23,434,5,5,12,356,55,2,5};
          int n=9;
          leader(arr,n);
          

          return 0;
}