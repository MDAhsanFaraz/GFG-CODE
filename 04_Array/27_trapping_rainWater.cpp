//efficient
#include<iostream>

using namespace std;
int Getwater (int arr[],int n)
{
          int res=0;
          int lmax[n];
          int rmax[n];
          lmax[0]=arr[0];
          for(int i=1;i<n;i++)
          {
                    lmax[i]=max(arr[i],lmax[i-1]);

          }
          rmax[n-1]=arr[n-1];
          for (int i=n-2;i<=0;i--)
          {
                    rmax[i]=max(arr[i],rmax[i+1]);
          }
          for(int i=1;i<n-1;i++)
          {
                    res=res+(min(lmax[i],rmax[i])-arr[i]);

          }
          return res ;


}
int main(){
             int arr[]={3,4,5,2,5,1,6};
             int n =7;
             cout<<Getwater(arr, n)<<" units of water can be strored";
          return 0;
}