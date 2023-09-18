//efficient
#include<iostream>
#include<unordered_set>


using namespace std;
int Intersection(int a[],int b[],int m,int n)
{
          int res=0;
          unordered_set<int>s(a,a+n);
          for(int i=0;i<m;i++)
          {
                    if(s.find(b[i])!=s.end())
                    {res++;
                    s.erase(b[i]);

                    }
                    
          }
          return res;
}
int main(){
             int a[]={23,45,23,54,23,5,6,3,6,23};
             int b[]={23,45,54,5,6,3} ;
          int m=10;
          int n=6;
         cout<< Intersection(a,b,m,n)<<"  Elements intersect";
          return 0;
}