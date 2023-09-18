#include<iostream>
#include<algorithm>
using namespace std;
int mindiff(int arr[],int n,int m)
{
          if(m>n)
          return -1;
          sort(arr,arr+n);
          int res =arr[m-1]-arr[0];
          for(int i=1;(i+m-1)<n;i++)
          {
                    res=min(res,(arr[i+m-1]-arr[i]));
          }
          return res;
}
int main(){
          int arr[]={23,45,12,544,523,12};
          int n=6,m=3;
cout<<mindiff(arr,n,m);
          return 0;
}