// naive
#include<iostream>

using namespace std;
int Maxlen(int arr[],int n,int sum)
{
          int res=0;
          for(int i=0;i<n;i++)
          {
                    int curr_sum=0;
                    for(int j=i;j<n;j++)
                    {
                              curr_sum+=arr[j];
                              if(curr_sum==sum)
                              {
                                        res=max(res,j-i+1);//j=end index i= starting index +1 to compensate ass array start from 0
                              }
                    }
          }
          return res;
}
int main(){
          int arr[]={23,4,1,5,23,5,6,23,5,5,23};
          int n=sizeof(arr)/sizeof(arr[1]);
          int sum=10;
          cout<<Maxlen(arr,n,sum);
          
          return 0;
}