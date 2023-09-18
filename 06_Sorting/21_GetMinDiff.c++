#include<iostream>
#include<algorithm>

using namespace std;
 int GetMin(int arr[0],int n)
 {
          sort(arr,arr+n);
          int res=INT16_MAX;
          for(int i=1;i<n;i++)
          {
                    res=min(res,arr[i]-arr[i-1]);

          }
          return res;

 }
int main(){
          int arr[]={23,45,12,55,234,5};
          cout<<GetMin(arr,6);
          return 0;
}