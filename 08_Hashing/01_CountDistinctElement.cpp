//naive solution
#include<iostream>

using namespace std;
int CountDist(int arr[],int n)
{
          int res=0;
          for(int i=0;i<n;i++)
          {
                    bool flag=false;
                    for(int j=0;j<i;j++)
                    {
                              if(arr[j]==arr[i])
                              {
                                        flag=true;
                                        break;
                              }
                    }
                    if(flag==false)
                    {
                              res++;

                    }
          }
          return res;
}
int main(){
          int arr[]={23,4,5,23,5,2,4,23,4};
          int n=9;
         cout<< CountDist(arr,n);

          
          return 0;
}