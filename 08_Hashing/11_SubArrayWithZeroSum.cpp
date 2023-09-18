// naive
#include<iostream>

using namespace std;
bool Subarray0sum(int arr[],int n)
{
          for(int i=0;i<n;i++)
          {
                   int  curr_sum=0;
                    for(int j=i;j<n;j++)

                    {
                              curr_sum+=arr[j];
                              if(curr_sum==0)
                              {
                                        return true;
                              }

                    }
          }
          return false;
}
int main(){
                  int arr[]={23,35,34,23,23,34,1313,-34,34};
          
          int n=9;
          if(Subarray0sum(arr,n))
          {
                    cout<<"true";
          }
          else
          {
                    cout<<"false";
          }
          
          return 0;
}