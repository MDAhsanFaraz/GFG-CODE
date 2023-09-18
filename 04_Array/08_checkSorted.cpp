// naive methodd
#include<iostream>

using namespace std;
bool CheckSorted(int arr[],int n)
{
          for(int i=0;i<n;i++)
          {
                    for(int j=i+1;j<n;j++)
                    {
                              if(arr[i]>arr[j])
                              {
                                        return false;
                              }
                    }

          }
          return true;
}
int main(){
          int arr []={23,45,677,895,953,2345};
          int n=6;
       cout<<   CheckSorted(arr,n);
          return 0;
}