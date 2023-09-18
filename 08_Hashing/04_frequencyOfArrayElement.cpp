// efficient
#include<iostream>
#include<unordered_map>
using namespace std;

void CountFreq(int arr[],int n)
{
          unordered_map<int,int> h;
          for(int i=0;i<n;i++)
          {
                    h[arr[i]]++;
          }
          for(auto e :h)
          {
                    cout<<e.first<<" "<<e.second<<endl;
          }
}
int main(){
           int arr[]={23,45,23,54,23,5,6,3,6,23};
          int n=10;
          CountFreq(arr,n);
          
          return 0;
}