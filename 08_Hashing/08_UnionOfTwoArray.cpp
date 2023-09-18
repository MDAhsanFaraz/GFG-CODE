// efficient
#include<iostream>
#include<unordered_set>

using namespace std;
int UnionCount(int a[],int b[],int m,int n)
{
          unordered_set<int> s(a,a+n);
          for(int i=0;i<n;i++)
          {
                    s.insert(b[i]);
          }
          return s.size();
}
int main(){
          int a[]={1,2,3,4,5,6,7,8,9,10};
             int b[]={1,12,23,34,5,46} ;
          int m=10;
          int n=6;
         cout<<"Total "<< UnionCount(a,b,m,n)<<" Distinct element are present in the array";
          
          return 0;
}