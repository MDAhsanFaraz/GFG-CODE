// Efficeint method
#include<iostream>

using namespace std;
int Getlargest(int arr[],int n)
{
          int res=0;
          for(int i=0;i<n;i++)
          {
                    if(arr[i]>arr[res])
                    {
                              res=i;
                    }
          }
          return res;
}

int main(){
          int arr[]={22,23,45,43,2341,45};
          cout<<Getlargest(arr,6);
          return 0;
}