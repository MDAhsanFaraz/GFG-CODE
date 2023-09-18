// naive 
#include<iostream>

using namespace std;
bool isPair(int arr[],int n,int sum)
{
          for(int i=0;i<n;i++)
          {
                    for(int j=i+1;j<n;j++)
                    {
                              if(arr[i]+arr[j]==sum)
                              {
                                        return true;
                              }
                    }
          }
          return false;
}
int main(){
          int arr[]={23,35,34,23,23,34,1313,35,34};
          int sum=8;
          int n=9;
          if(isPair(arr,n,sum))
          {
                    cout<<"true";
          }
          else
          {
                    cout<<"false";
          }
          return 0;
}