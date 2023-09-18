//naive
#include<iostream>

using namespace std;
int MaxSum(int arr[],int n)
{
          int res=0;
          for (int i=0;i<n;i++)
          {
                    int curr_max=arr[i];
                    int curr_sum=arr[i];
                    for(int j=1;j<n;j++)
                    {
                              int index=(i+j)%n;
                              curr_sum+=arr[index];
                              curr_max=max(curr_max,curr_sum);
                    
                    }
                    res=max(res,curr_max);

          }
          return res;

}
int main(){
          int arr[]={23,4,3,30,32,1,31,34};
          int n=8;
          cout<<"maximum sum of all normal and circular subarray is \t"<<MaxSum(arr,n);
          return 0;
}