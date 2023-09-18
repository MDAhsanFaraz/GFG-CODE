#include<iostream>
#include<unordered_set>
using namespace std;
int CountDist(int arr[],int n)
{
          unordered_set<int> s(arr,arr+n);
          return s.size();
}
int main(){
                    int arr[]={23,4,5,23,5,2,4,23,4};
          int n=9;
         cout<< CountDist(arr,n);
          
          return 0;
}  