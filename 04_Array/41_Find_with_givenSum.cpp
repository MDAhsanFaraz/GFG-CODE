//naive
#include<iostream>

using namespace std;
int FindGivensum(int arr[],int n,int Givensum)
{
          for(int i=0;i<n;i++)
          {
                    int sum=0;
                    for (int j=i;j<n;j++)
                    {
                              sum+=arr[j];
                            
                    }
                      if(sum==Givensum)
                              {
                                        return 1;
                              }
          }
}
int main(){
          int arr[]={23,34,4,2,1,5,1};
          int n=7;
          int Givensum=38;
         FindGivensum(arr,n,Givensum );
          return 0;
}