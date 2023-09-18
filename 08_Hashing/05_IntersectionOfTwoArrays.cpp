//naive
#include<iostream>

using namespace std;
int Intersection(int a[],int b[],int m,int n)
{
          int res=0;
          for(int i=0;i<m;i++)
          {
                    bool flag =false;   
                    for(int j=0;j<i;j++)//to check if the element whose has been checked for intersection
                                        //  is not repeating 
                    {
                              if(a[i]==a[j])
                              {
                                        flag=true;
                                        break;
                              }
                    }
                    if(flag ==true)
                    {
                              continue;

                    }
                    for(int j=0;j<n;j++)
                    {
                              if(a[i]==b[j])
                              {
                                        res++;
                                        break;
                              }
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