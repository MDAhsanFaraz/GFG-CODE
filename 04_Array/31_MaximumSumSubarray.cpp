//efficient 
#include<iostream>

using namespace std;
int maxSubArraySum(int arr[],int n)//kadanes algo
{
     int res=arr[0];
     int maxending =arr[0];
     for (int i=1;i<n;i++)
     {
               maxending=max (maxending+arr[i],arr[i]);
               res=max (maxending,res); //
     }
     return res;
}
int main(){
          int arr[]={23,-4,13,-345,61,2};
          int n=6;
       cout<<"maximum sub array sum is\t" <<maxSubArraySum(arr,n);
          
          return 0;
}